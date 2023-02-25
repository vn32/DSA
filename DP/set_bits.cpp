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

int return_set_bits(int n){
	int cnt=0;
	while(n){
		if(n&1){
			cnt++;
		}
		n=n/2;
	}
	return cnt;
}
int main(){
	init_code();
	//print numbe ro fset bits for number 1.. n
	int n;
	cin>>n;
	//TC=nlogn
	// for(int i=1;i<=n;i++){
	// 	cout<<return_set_bits(i)<<endl;
	// }

	//o(n) solution
	//dp[i]=dp[i/2]+(i%2)
	int dp[n+1];
	dp[0]=0;
	for(int i=1;i<=n;i++){
		dp[i]=dp[i/2]+(i%2);
		cout<<dp[i]<<endl;
	}

	

	
}