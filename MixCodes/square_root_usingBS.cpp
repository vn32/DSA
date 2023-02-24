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
float solve(int n,int p){
	int s=0,e=n;
	float ans=0,inc=0.1;
	while(s<=e){
		int mid=(s+e)/2;
		if(mid*mid==n)
			return mid;
		else if(mid*mid<n){
			ans=mid;
			s=mid+1;
		}
		else
			e=mid-1;
	}
	for(int i=0;i<p;i++){
		while(ans*ans<=n)
			ans+=inc;
		ans-=inc;
		inc=inc/10.0;

	}
	return ans;

}
int main(){
	init_code();
	int n,p;
	cin>>n>>p;
	cout<<solve(n,p)<<endl;


	
}