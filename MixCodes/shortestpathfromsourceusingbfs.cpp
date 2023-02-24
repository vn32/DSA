//shortest path in undirected graph using BFS
//single source sjortest path for undirected graph
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
int main(){
	init_code();
	Read(V,E);
	Read(source,dest);
	vector<int> arr[V];
	loop(i,E){
		Read(u,v);
		arr[u].push_back(v);
		arr[v].push_back(u);	
	}
	vector<bool> vis(V,false);
	vector<int> dist(V,0);
	vector<int> parent(V,0);
	queue<int> q;
	parent[source]=source;
	q.push(source);
	vis[source]=true;
	while(!q.empty()){
		int curr=q.front();
		q.pop();
		for(auto child:arr[curr]){
			if(!vis[child]){
				dist[child]=dist[curr]+1;
				parent[child]=curr;
				vis[child]=true;
				q.push(child);

			}
		}

	}
	//print the shortest distance
	loop(i,V){
		cout<<"shortest distance to "<<i<<" is "<<dist[i]<<endl;

	}
	//print the path from source to any destination
	if(dest!=-1){
		int temp=dest;
		while(temp!=source){
			cout<<temp<<"-->";
			temp=parent[temp];
		}
		cout<<temp<<endl;
	}




	
} 