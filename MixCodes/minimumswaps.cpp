#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(n) int n;cin>>n
#define loop(x,n) for(int x = 0; x < n; ++x)
#define vec vector<int>
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
	vec arr;
	read(n);
	loop(i,n){
		read(var);
		arr.push_back(var);	
	}
	pair<int,int> ap[n];
	vector<bool> visited(n,false);
	loop(i,n){
		ap[i].first=arr[i];
		ap[i].second=i;
	}
	sort(ap,ap+n);
	int ans=0;
	loop(i,n){
		int old_position=ap[i].second;
		if(old_position==i or visited[i]==true)
			continue;
		int node=i;
		int cnt=0;
		while(!visited[node]){
			visited[node]=true;
			int next_node=ap[node].second;
			node=next_node;
			cnt++;
		}
		ans+=cnt-1;
	}
	cout<<ans<<endl;


	
}