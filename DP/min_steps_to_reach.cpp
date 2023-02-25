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
const int N=1000000;
int memo[N];
//without optimisation
// int dp(int n){
// 	if(n==1)
// 		return 0;
// 	int a=INT_MAX,b=INT_MAX,c=INT_MAX;
// 	if(n%2==0){
// 		a=dp(n/2);
// 	}
// 	if(n%3==0){
// 		b=dp(n/3);
// 	}
// 	c=dp(n-1);
// 	return min({a,b,c})+1;
// }
int dp(int n){
	if(n==1)
		return 0;
	int &ans=memo[n];
	if(ans!=-1)
		return ans;
	ans=INT_MAX;
	if(n%2==0){
		ans=min(ans,dp(n/2));
	}
	if(n%3==0){
		ans=min(ans,dp(n/3));
	}
	ans=min(ans,dp(n-1));
	ans+=1;
	return ans;
}


int main(){
	init_code();
	
	int n;
	cin>>n;
	memset(memo,-1,sizeof(memo));
	cout<<dp(n)<<endl;
	
}