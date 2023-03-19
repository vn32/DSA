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
int countNumber=0;

// int rodCutting(int n,vector<int> &prices){
// 	//base case
// 	if(n==0)
// 		return 0;
// 	int ans=0;
// 	for(int i=1;i<=n;i++){
// 		countNumber++;
// 		ans=max(ans,prices[i]+rodCutting(n-i,prices));

// 	}
// 	return ans;
// }

//apply memoization
int memo[100001];
int rodCutting(int n,vector<int> &prices){
	//base case
	if(n==0)
		return 0;
	if(memo[n]!=-1)
		return memo[n];
	int ans=0;
	for(int i=1;i<=n;i++){
		countNumber++;
		ans=max(ans,prices[i]+rodCutting(n-i,prices));

	}
	return memo[n]=ans;
}

int main(){
	init_code();
	int n,k;
	cin>>n;
	vector<int> prices;
	loop(i,n){
		cin>>k;
		prices.push_back(k);

	}
	memset(memo,-1,sizeof(memo));
	cout<<rodCutting(n,prices)<<endl;
	cout<<"count is "<<countNumber<<endl;
	

	
}