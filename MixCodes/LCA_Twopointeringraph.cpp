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

void dfs(int cur,int par,vector<int>& dist,vector<int> &parent,vector<int> gr[]){
	parent[cur]=par;
	dist[cur]=dist[par]+1;
	for(auto child: gr[cur]){
		if(child!=par)
			dfs(child,cur,dist,parent,gr);
	}

}

int LCA(int u,int v,vector<int>& dist,vector<int>& par){
	if(u<v)
		swap(u,v);
	int diff=dist[u]-dist[v];
	while(diff--){
		u=par[u];
	}
	while(u!=v){
		u=par[u];
		v=par[v];
	}
	return u;

}
int main(){
	init_code();
	Read(n,m);
	vector<int> gr[n+1];
	vector<int> dist(n+1,0);
	vector<int> par(n+1,0);
	loop(i,m){
		Read(x,y);
		gr[x].push_back(y);
		//comment it to check in directed graph,I assumed that it's a tree
		//gr[y].push_back(x);		
	}

	dfs(1,0,dist,par,gr);
	Read(u,v);
	cout<<LCA(u,v,dist,par)<<endl;


	
}