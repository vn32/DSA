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
int partion(vector<int>& arr,int s,int e){
	int pivot=arr[e];
	int i=s-1;
	for(int j=s;j<=e;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[e]);
	return i+1;
}
int solve(vector<int>& arr,int s,int e,int k){
	int p=partion(arr,s,e);
	if(p==k)
		return arr[p];
	else if(k<p)
		return solve(arr,0,p-1,k);
	else
		return solve(arr,p+1,e,k);

}
int main(){
	init_code();
	vec arr;
	Read(n,k);
	loop(i,n){
		read(var);
		arr.push_back(var);	
	}
	cout<<solve(arr,0,n-1,k)<<endl;


	
}