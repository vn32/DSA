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
 static bool comp( vector<int>& v1, vector<int>& v2 ) {
        return v1[1] < v2[1];
}
int solve(vector<vector<int>>& intervals,int n){
    //sorting the 2d array on 2nd column
    sort(intervals.begin(), intervals.end(),comp);
    int ans=0,end=INT_MIN;
    for(int i=0;i<n;i++){
        if(intervals[i][0]>=end){
                ans++;
                end=intervals[i][1];
        }
            
    }
    return n-ans;
    
}
int main(){
    init_code();
    vec2d arr;
    Read(n,m);
    loop(i,n){
        vec v;
        loop(j,m){
            read(var);
            v.push_back(var);
        }
        arr.push_back(v);
        
    }
    cout<<solve(arr,n)<<endl;
    cout<<n<<" "<<m<<endl;


    
}