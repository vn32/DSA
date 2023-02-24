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
bool isdeli(pair<int,int> pa)
{
    return (pa.first == -1 && pa.second == -1);
}

bool isvalid(int x,int y,int n,int m,vector<vector<int>>& grid,int value){
	if(x<0 || y<0 || x>=n|| y>=m || grid[x][y]!=value)
		return false;
	return true;
}
void floodFill(vector<vector<int>>& grid,int x,int y,int color){
	int dx[]={-1,0,1,0};
	int dy[]={0,1,0,-1};
	int n=grid.size(),m=grid[0].size(),original_value=grid[x][y];
	queue<pair<int,int>> q;
	q.push({x,y});
	q.push({-1,-1});

	while(!q.empty()){
		while(!isdeli(q.front())){
			int x=q.front().first;
			int y=q.front().second;
			grid[x][y]=color;
			for(int i=0;i<4;i++){
				if(isvalid(x+dx[i],y+dy[i],n,m,grid,original_value)){
					grid[x+dx[i]][y+dy[i]]=color;
					q.push({x+dx[i],y+dy[i]});
				}
			}
			q.pop();
		}
		q.pop();
		if(!q.empty())
			q.push({-1,-1});
	}
	loop(i,n){
		loop(j,m){
			cout<<grid[i][j]<<" ";
		}
		cout<<endl;
	}


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
	Read(x,y);
	read(color);
    floodFill(grid,x,y,color);	
}