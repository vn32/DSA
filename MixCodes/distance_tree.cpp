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
// dist[0][i] = distance from node a to node i
// dist[1][i] = distance from node b to node i
int max_dist=-1;
int maxnode=-1;

void dfs(int node,int dist,vector<int> adj[],vector<bool>& vis,vector<vector<int>>& distance,int i){
	distance[i][node]=dist;
	vis[node]=true;
	if(dist>max_dist){
		max_dist=dist;
		maxnode=node;
	}
	for(int child:adj[node]){
		if(!vis[child]){
			dfs(child,dist+1,adj,vis,distance,i);
		}
	}
}


int main() {
	init_code();
    int n, u, v;
	cin >> n;
	vector<int> adj[n+1];
    vector<bool> vis(n+1,false);
	for (int i = 0; i < n - 1; i++) {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<vector<int>> distance(2,vector<int>(n+1,0));
	dfs(1,0,adj,vis,distance,0);
	for(int i=0;i<n+1;i++){
		vis[i]=false;
	}
	int a=maxnode;
	cout<<"hello"<<endl;
	cout<<maxnode<<" "<<max_dist<<endl;
	max_dist=-1;
	dfs(a,0,adj,vis,distance,0);
	for(int i=0;i<n+1;i++){
		vis[i]=false;
	}
	int b=maxnode;
	cout<<maxnode<<" "<<max_dist<<endl;
	dfs(b,0,adj,vis,distance,1);
	for(int i=1;i<=n;i++){
		cout<<max(distance[0][i],distance[1][i])<<endl;
	}

	
	return 0;
	//https://cses.fi/problemset/task/1132
}

