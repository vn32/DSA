#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(n) int n;cin>>n
#define Read(n,m) int n,m;cin>>n>>m
#define loop(x,n) for(int x = 0; x < n; ++x)
#define vec vector<int>
#define vec2d vector<vector<int>>
using namespace std;
int dp[102][102];
void init_code() {
fast_io;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
int editDistance(string s, string t,int n,int m) {
	if(n==0)
		return m;
	if(m==0)
		return n;
	if(dp[n][m]!=-1)
		return dp[n][m];
	if(s[n-1]==t[m-1])
		return dp[n][m]=editDistance(s,t,n-1,m-1);
	return dp[n][m]=min({1+editDistance(s,t,n,m-1),1+editDistance(s,t,n-1,m),1+editDistance(s,t,n-1,m-1)});   
}
int main(){
	init_code();
	string s,t;
	cin>>s>>t;
	memset(dp,-1,sizeof(dp));
	cout<<editDistance(s,t,s.size(),t.size())<<endl;



	
}