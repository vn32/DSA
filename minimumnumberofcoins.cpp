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
int minimumnumberofcoins(vector<int> &arr,int n,int V){
	int t[n+1][V+1];
	memset(t,-1,sizeof(t));
	for(int i=0;i<n+1;i++){
		for(int j=0;j<V+1;j++){
			if(i==0)
			{
				t[i][j]=INT_MAX-1;
				continue;
			}
		    else if(j==0)
		    {
		    	t[i][j]=0;
		    	continue;
		    }
		    else if(i==1){
		    	if(j%arr[i-1]==0)
		    		t[i][j]=j/arr[i-1];
		    	else
		    		t[i][j]=INT_MAX-1;
		    	continue;
		    }
			else if(arr[i-1]<=j){
				t[i][j]=min(t[i][j-arr[i-1]]+1,t[i-1][j]);
			}
			else{
				t[i][j]=t[i-1][j];
			}
		}
	}
	if(t[n][V]>0)
	return t[n][V];
    return -1;

	
}
int main(){
	init_code();
	Read(n,V);
	vec arr;
	loop(i,n){
		read(k);
		arr.push_back(k);
	}
	cout<<minimumnumberofcoins(arr,n,V)<<endl;
	


	
}