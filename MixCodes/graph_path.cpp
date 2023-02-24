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
int shortest_path(vector<vector<int> >& grid){
    //return the shortest path len
    int n=grid.size();
    int m=grid[0].size();
    int ans=grid[0][0];
    vector<vector<bool>> visited(n,vector<bool>(m,false));
    visited[0][0]=true;
    queue<pair<int,int>> q;
    q.push({0,0});
    while(!q.empty()){
        cout<<"ins while"<<endl;
        auto node=q.front();
        q.pop();
        int i=node.first;
        int j=node.second;
        if(i==n-1 and j==m-1)
        return ans;
        int dx[]={-1,1,0,0};
        int dy[]={0,0,1,-1};
        int temp=INT_MAX;
        int x=-1,y=-1;
        for(int k=0;k<4;i++){
            int nx=i+dx[k];
            int ny=j+dy[k];
            if(nx>=0 and nx<n and ny>=0 and ny<m and visited[nx][ny]==false and grid[nx][ny]<temp){
                temp=grid[nx][ny];
                 x=nx,y=ny;
            }
        }
        if(x!=-1 and y!=-1){
            cout<<ans<<endl;
            visited[x][y]=true;
            ans+=grid[x][y];
            q.push({x,y});
            if(x==n-1 and y==m-1)
                return ans;
        }
        
    }
    return ans;
}
int main(){
    init_code();
    vector<vector<int>> arr;
    Read(n,m);
    loop(i,n){
        vec temp;
        loop(j,m){
            read(k);
            temp.push_back(k);

        }
        arr.push_back(temp);
    }
    cout<<shortest_path(arr)<<endl;


    
}


    
    
