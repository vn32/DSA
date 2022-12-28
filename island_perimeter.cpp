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
int numofneighbour(vector<vector<int>>& grid,int i,int j,int n,int m){
	int count=0;
	//up
	if(i>0 and grid[i-1][j])
		count++;

	//down
	if(i<n-1 and grid[i+1][j])
		count++;

	//left
	if(j>0 and grid[i][j-1])
		count++;
	//right
	if(j<m-1 and grid[i][j+1])
		count++;
	return count;
}
int perimeter_Island(vector<vector<int>>& grid){
	int n=grid.size(),m=grid[0].size();
	int ans=0;
	loop(i,n){
		loop(j,m){
			if(grid[i][j]==1){
				ans+=(4-numofneighbour(grid,i,j,n,m));
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

	cout<<perimeter_Island(grid)<<endl;
	//cout<<"hello"<<endl;


	
}
//https://leetcode.com/problems/island-perimeter/