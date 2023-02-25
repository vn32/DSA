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
//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
const int N=1000000;
int memo[N];
int numberOfSteps(int n){
	if(n==0)
		return 0;
	int &ans=memo[n];
	if(ans!=-1)
		return ans;
	ans=INT_MAX;
	if(n%2==0){
		ans=min(ans,numberOfSteps(n/2));
	}
	ans=min(ans,numberOfSteps(n-1));
	ans+=1;
	return ans;
}
int main(){
	init_code();
	int n;
	cin>>n;
	memset(memo,-1,sizeof(memo));
	cout<<"Ans is: "<<numberOfSteps(n)<<endl;

	

	
}