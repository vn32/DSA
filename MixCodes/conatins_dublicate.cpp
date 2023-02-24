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
bool solve(vector<int>& nums,int k){
	unordered_map<int,int> mp;
	for(int i=0;i<nums.size();i++){
	    int diff;
	    if(mp.find(nums[i])!=mp.end()){
	        diff=abs(mp[nums[i]]-i);
	        if(diff<=k)
	            return true;
	        
	    }
	    mp[nums[i]]=i;
	}
	return false;

}
int main(){
	init_code();
	vec arr;
	Read(n,k);
	loop(i,n){
		read(var);
		arr.push_back(var);	
	}
	cout<<solve(arr,k);


	
}