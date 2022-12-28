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
int messageRoute(int n, vector<int> arr[])
{
    vector<bool> visited(n+1,false);
    queue<int> q;
    vector<int> dist(n+1,0);
    q.push(1);
    visited[1]=true;
    dist[1]=0;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto child:arr[node]){
            if(!visited[child]){
                visited[child]=true;
                q.push(child);
                dist[child]=dist[node]+1;
            }
        }
        
    }
    if(visited[n])
    return dist[n];
    return -1;
    
    
}
int main(){
	init_code();
	Read(v,e);
	vector<int> arr[v+1];
	loop(i,e){
		Read(x,y);
		arr[x].push_back(y);
		arr[y].push_back(x);	
	}
	cout<<messageRoute(v,arr)<<endl;


	
}