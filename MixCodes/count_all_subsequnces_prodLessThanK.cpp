#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(n) int n;cin>>n
#define Read(n,m) int n,m;cin>>n>>m
#define loop(x,n) for(int x = 0; x < n; ++x)
#define vec vector<int>
#define vec2d vector<vector<int>>
using namespace std;
void init_code() {
fast_io;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
int solve(vector<int>& arr,int k){
	int n=arr.size();
	int t[k+1][n+1];
	memset(t,0,sizeof(t));
	for(int i=1;i<=k;i++){
		for(int j=1;j<=n;j++){
			//count upto taking 1 to j-1 terms
			t[i][j]=t[i][j-1];

			//now if arr[j-1]<=i 
			if(arr[j-1]<=i){
				t[i][j]+=1+t[i/arr[j-1]][j-1];  //here 1 means taking the arr[j-1]th element alone and t[i/arr[j-1]] means taking from 1 to j
			}
		}
	}
	return t[k][n];

}
int main(){
	init_code();
	vec arr;
	Read(n,k);
	loop(i,n){
		read(var);
		arr.push_back(var);	
	}
	cout<<solve(arr,k)<<endl;
	


	
}