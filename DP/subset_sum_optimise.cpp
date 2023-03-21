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

int main(){
	init_code();
	int SUM,n;
	cin>>SUM>>n;
	vector<int> a(n);
	loop(i,n){
		cin>>a[i];
	}
	bool dp[SUM+1];
	dp[0]=true;
	for(int i=1;i<=SUM;i++){
		dp[i]=false;
	}
	for(int i=0;i<n;i++){
		for(int j=SUM;j>=0;j--){
			if(j-a[i]>=0){
				dp[j]|=dp[j-a[i]];
			}
			
		}

	}
	cout<<"answer is "<<dp[SUM]<<endl;

	

	

	
}