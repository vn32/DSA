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
vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    for(auto child:mp){
        q.push({child.second,child.first});
        if(q.size()>k)
            q.pop();
    }
    vector<int> ans;
    while(!q.empty()){
        cout<<q.top().second<<" "<<q.top().first<<endl;
        ans.push_back(q.top().second);
        q.pop();
        
    }
    return ans;   
}
int main(){
    init_code();
    vec arr;
    Read(n,k);
    loop(i,n){
        read(var);
        arr.push_back(var); 
    }
    vector<int> ans=topKFrequent(arr,k);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;


    
}











