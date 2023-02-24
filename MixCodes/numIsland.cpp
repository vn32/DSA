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
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

bool isvalid(int x,int y,int n,int m,vector<vector<bool>>& vis,vector<vector<int>>& grid){
	if(x<0 || y<0 || x>=n|| y>=m || vis[x][y]==true || grid[x][y]==0)
		return false;
	return true;
}
void dfs(int x,int y,int n,int m,vector<vector<bool>>& vis,vector<vector<int>>& grid){
	vis[x][y]=true;
	for(int i=0;i<4;i++){
		if(isvalid(x+dx[i],y+dy[i],n,m,vis,grid))
			dfs(x+dx[i],y+dy[i],n,m,vis,grid);

	}
	
}
int numIsland(vector<vector<int>>& grid){
	int n=grid.size(),m=grid[0].size();
	vector<vector<bool>> vis(n,vector<bool>(m,false));
	int ans=0;
	loop(i,n){
		loop(j,m){
			if(grid[i][j]==1 and vis[i][j]==false){
				dfs(i,j,n,m,vis,grid);
				ans++;

			}

		}
	}
	return ans;


}
int main(){
	init_code();
	Read(n,m);
	vector<vector<int>> grid;
	loop(i,n){
		vec arr;
		loop(j,m){
			read(var);
			arr.push_back(var);
		}
		grid.push_back(arr);	
	}
	cout<<numIsland(grid);


	
}