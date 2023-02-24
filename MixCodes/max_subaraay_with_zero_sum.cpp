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
int solve(vector<int>& arr,int n){
	unordered_map<int,int> mp;
	int sum=0,max_len=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		//if arr[i] is zero
		if(sum==0 and max_len==0)
			max_len=1;
		//if sum is zero
		if(sum==0)
			max_len=i+1;
		//else check for the presum
		if(mp.find(arr[i])!=mp.end()){
			max_len=max(max_len,i-mp[arr]);
		}
		else
		{
			mp[sum]=i;
		}
	}
	return max_len;

}
int main(){
	init_code();
	vec arr;
	read(n);
	loop(i,n){
		read(var);
		arr.push_back(var);	
	}
	cout<<solve(arr,n)<<endl;


	
}