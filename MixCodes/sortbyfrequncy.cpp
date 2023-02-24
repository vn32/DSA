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
static bool compare(pair<int,pair<int,int>>& a,pair<int,pair<int,int>>& b){
    if(a.second.second!=b.second.second)
        return (a.second.second<b.second.second);
    else
        return (a.first>b.first);
}
vector<int> frequencySort(vector<int>& nums) {
   unordered_map<int,pair<int,int>> mp;
    for(int i=0;i<nums.size();i++){
        if(mp.find(nums[i])!=mp.end()){
            mp[nums[i]].second++;
        }
        else
            mp[nums[i]]=make_pair(i,1);
    }
    vector<pair<int,pair<int,int>> >arr;
    for(auto it:mp){
        arr.push_back(make_pair(it.first,it.second));
        
    }
    sort(arr.begin(),arr.end(),compare);
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        int count=arr[i].second.second;
        while(count--)
            ans.push_back(arr[i].first);
    }
    return ans;
    
}
int main(){
	init_code();
	vec arr;
	read(n);
	loop(i,n){
		read(var);
		arr.push_back(var);	
	}
	vector<int> ans=frequencySort(arr);
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";


	
}