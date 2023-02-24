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
int bfs(vector<vector<int>> &grid,vector<vector<bool>> &visited,int x,int y,int n,int m){
	int count=1;
	queue<pair<int,int>> q;
	q.push({x,y});
	visited[x][y]=true;
	while(!q.empty()){
		int cx=q.front().first;
		int cy=q.front().second;
		q.pop();
		int dx[]={-1,0,1,0};
		int dy[]={0,1,0,-1};
		for(int i=0;i<4;i++){
			int nx=cx+dx[i];
			int ny=cy+dy[i];
			if(nx>=0 and nx<n and ny>=0 and ny<m and visited[nx][ny]==false and grid[nx][ny]==1){
				visited[nx][ny]=true;
				q.push({nx,ny});
				count++;
			}
		}
	}
	return count;

}
int largest_island(vector<vector<int>> &grid){
	int n=grid.size();
	int m=grid[0].size();
	vector<vector<bool>> visited(n,vector<bool>(m,false));
	int ans=-1;
	int numberofcompo=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(grid[i][j]==1 and visited[i][j]==false){
				int tempans=bfs(grid,visited,i,j,n,m);
				numberofcompo++;
				cout<<"i: "<<i<<" j: "<<j<<" tempans: "<<tempans<<endl;
				if(tempans>ans)
					ans=tempans;

			}
		}

	}
	cout<<"numberofcompo "<<numberofcompo<<endl;
	return ans;
}
int main(){
	init_code();
	Read(n,m);
	vec2d arr;
	loop(i,n){
		vec temp;
		loop(j,m){
			read(k);
			temp.push_back(k);
		}
		arr.push_back(temp);	
	}
	cout<<largest_island(arr)<<endl;


	
}