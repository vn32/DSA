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
int cnt=0;
vector<int> memo;
int fib(int n){
	cnt++;
	if(n<=2)
		return 1;
	//memoisation part
	if(memo[n]!=-1)
		return memo[n];
	return memo[n]=fib(n-1)+fib(n-2);
}

int main(){
	init_code();
	// int n=6;
	// memo.resize(n+1,-1);
	// cout<<fib(n)<<endl;
	// cout<<"count : "<<cnt;

	//tabulation
	int n=20;
	memo.resize(n+1,0);
	memo[1]=memo[2]=1;
	for(int i=3;i<=n;i++){
		memo[i]=memo[i-1]+memo[i-2];
	}
	cout<<memo[n]<<endl;


	

	
}