
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
int max_dist=-1;
int maxnode=-1;

void dfs(int node,int dist,vector<int> adj[],vector<bool>& vis){
	vis[node]=true;
	if(dist>max_dist){
		max_dist=dist;
		maxnode=node;
	}
	for(int child:adj[node]){
		if(!vis[child]){
			dfs(child,dist+1,adj,vis);
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
	dfs(4,0,adj,vis);
	for(int i=0;i<n+1;i++){
		vis[i]=false;
	}
	cout<<maxnode<<" "<<max_dist<<endl;
	//max_dist=-1;
	dfs(2,0,adj,vis);
	int b=maxnode;
	cout<<maxnode<<" "<<max_dist<<endl;
	
	return 0;
}

