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
void solve(vector<int>& arr,int n,int k){
	int sum=0,i=0,j=0;
	while(j<n ){
		sum+=arr[j];
		j++;
		
		while(i<j and sum>k ){
		sum-=arr[i];
		i++;
		}
		if(sum==k){
			cout<<i<<" "<<j-1<<endl;

		}
		

	}


}
int main(){
	init_code();
	vec arr;
	Read(n,k);
	loop(i,n){
		read(var);
		arr.push_back(var);	
	}
	solve(arr,n,k);


	
}