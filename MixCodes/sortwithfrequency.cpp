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
static bool cmp(const pair<int, int>& a,const pair<int, int>& b)
{
	if(a.second==b.second)	
    return a.first > b.first;
return a.second < b.second;
}
vector<int> sortt(unordered_map<int, int>& M)
{
    vector<pair<int, int> > A;
    for (auto& it : M) {
        A.push_back(it);
    }
    vector<int> ans;
    sort(A.begin(), A.end(), cmp);
    for (auto& it : A) {
        for(int i=0;i<it.second;i++)
    	    ans.push_back(it.first);
  
    }
    return ans;
}
vector<int> frequencySort(vector<int>& nums) {
    int n=nums.size();
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++){
		mp[nums[i]]++;
	}
	 return sortt(mp);
        
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