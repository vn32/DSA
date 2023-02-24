//https://leetcode.com/problems/redundant-connection/description/
//https://leetcode.com/discuss/general-discussion/655708/graph-for-beginners-problems-pattern-sample-solutions/
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
int find(int i,vector<int>& parent){
        if(parent[i]==-1)
        return i;
        return parent[i]=find(parent[i],parent);
}
void union1(int s1,int s2,vector<int>& parent,vector<int>& rank){
        int x=find(s1,parent);
        int y=find(s2,parent);
        if(rank[x]<rank[y]){
            parent[x]=y;
            rank[y]+=rank[x];
        }
        else{
            parent[y]=x;
            rank[x]+=rank[y];
        }
}
vector<int> findRedundantConnection(vector<vector<int>>& edges) {
 		int n = edges.size();
 		vector<int> parent(n+1,-1);
        vector<int> rank(n+1,1);
 		vector<int>res(2, 0);
 		for (int i = 0; i < n; i++) {
 			int x = find(edges[i][0],parent);
 			int y = find(edges[i][1],parent);
 			if (x != y)
 				union1(x,y,parent,rank);
 			else {
 				res[0] = edges[i][0];
 				res[1] = edges[i][1];
 			}
 		}

 		return res;
}

int main(){
	init_code();
	//number of nodes,number of edges
	Read(n,e);
	vec2d edges;
	loop(i,e){
		Read(x,y);
		vec temp;
		temp.push_back(x);
		temp.push_back(y);
		edges.push_back(temp);
	}
	vec ans=findRedundantConnection(edges);
	cout<<ans[0]<<" "<<ans[1];	
}