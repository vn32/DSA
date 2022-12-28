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
int solve(vector<int>& nums,int n){
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++)
		mp[nums[i]]++;
	int key,fre=INT_MIN;
	for(auto &it:mp){
		if(it.second>fre){
			fre=it.second;
			key=it.first;
		}
	}
	int fidx,lidx;
	fidx=find(nums.begin(),nums.end(),key)-nums.begin();
	lidx=find(nums.rbegin(),nums.rend(),key)-nums.rbegin();
	cout<<fidx<<" "<<lidx<<endl;


return 0;

}
int main(){
	init_code();
	vec nums;
	read(n);
	loop(i,n){
		read(var);
		nums.push_back(var);	
	}
	cout<<solve(nums,n);


	
}