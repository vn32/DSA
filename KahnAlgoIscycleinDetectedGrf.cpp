// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends





/*  Function to check if the given graph contains cycle
*   V: number of vertices
*   adj[]: representation of graph
*/
bool kahn(int n,vector<int> adj[],vector<int> &in){
    queue<int> q;
    vector<int> res;
    for(int i=0;i<n;i++){
        if(in[i]==0)
        q.push(i);
    }
    while(!q.empty()){
        int x=q.front();
        res.push_back(x);
        q.pop();
        for(auto child:adj[x]){
            in[child]--;
            if(in[child]==0)
            q.push(child);
        }
        
    }
    if(res.size()==n)
    return false;
    return true;
}
bool isCyclic(int V, vector<int> adj[])
{
    // Your code here
    vector<int> in(V,0);
    for(int i=0;i<V;i++){
        for(auto child:adj[i]){
            in[child]++;
        }
    }
    return kahn(V,adj,in);
    
}


// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int v, e;
	    cin >> v >> e;
	    
	    vector<int> adj[v];
	    
	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }
	    
	    cout << isCyclic(v, adj) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends