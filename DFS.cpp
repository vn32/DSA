// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    
public:
void dfs(int i,vector<int> adj[],vector<bool> &vis,vector<int> &res){
    vis[i]=true;
    res.push_back(i);
    for(auto x:adj[i]){
        if(!vis[x]){
            dfs(x,adj,vis,res);
            
        }
    }
}
	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	    vector<bool> vis(V,false);
	    vector<int> res;
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            dfs(i,adj,vis,res);
	        }
	    }
	    return res;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.dfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends