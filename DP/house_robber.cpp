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
//https://leetcode.com/problems/house-robber/description/
int rob(int n,vector<int> &amount){
	if(n<=0)
		return 0;
	int ans=0;
	ans=max(amount[n-1]+rob(n-2,amount),rob(n-1,amount));
	return ans;
}

int main(){
	init_code();
	int n,k;cin>>n;
	vector<int> amount;
	loop(i,n){
		cin>>k;
		amount.push_back(k);
	}
	cout<<rob(n,amount)<<endl;
	

	
}