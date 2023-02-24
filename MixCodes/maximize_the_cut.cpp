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
void solve(vector<int>& arr,int n){
	int t[4][n+1];
        memset(t,-1,sizeof(t));
        for(int i=0;i<n+1;i++){
            t[0][i]=0;
        }
        for(int i=0;i<4;i++){
            t[i][0]=0;
        }
        for(int i=1;i<4;i++)
        {
            for(int j=1;j<n+1;j++){
                if(arr[i-1]<=j){
                    t[i][j]=max(1+t[i][j-arr[i-1]],t[i-1][j]);
                }
                else
                t[i][j]=t[i-1][j];
        
            }
        }
        for(int i=0;i<4;i++){
        	for(int j=0;j<n+1;j++){
        		cout<<t[i][j]<<" ";

        	}
        	cout<<endl;
        }
        cout<<"ans is "<<t[3][n]<<endl;

}
int main(){
	init_code();
	vec arr;
	read(n);
	loop(i,3){
		read(var);
		arr.push_back(var);	
	}
	solve(arr,n);


	
}