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
int solve(vector<int>& arr,int i,int cost){
	if(i+2>arr.size()-1)
		return cost+arr[i];
	else
		return min(solve(arr,i+1,cost+arr[i]),solve(arr,i+2,cost+arr[i]));

}
int main(){
	init_code();
	vec arr;
	read(n);
	loop(i,n){
		read(var);
		arr.push_back(var);	
	}
	vector<int> dp(n,0);

	cout<<min(solve(arr,0,0),solve(arr,1,0));

	


	
}