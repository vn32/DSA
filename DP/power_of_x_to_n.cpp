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
int power2(int a,int n){
	if(n==0)
		return 1;
	return a*power2(a,n-1);
}
int power(int a,int n){
	if(n==0)
		return 1;
	int temp=power(a,n/2);
	if(n&1)
		return a*temp*temp;
	else
		return temp*temp;

}
int main(){
	init_code();
	int a,n;
	cin>>a>>n;
	cout<<power(a,n)<<endl;
	/*cout<<power2(a,n);*/


	
}