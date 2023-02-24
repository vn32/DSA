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
int EquilibriumPoint(vector<int>& arr,int n){
	int totalSum=accumulate(arr.begin(),arr.end(),0);
	if(n<3)
		return -1;
	int leftSum=0;
	int rightSum;
	for(int i=1;i<n;i++){
		leftSum+=arr[i-1];
		 rightSum=totalSum-leftSum-arr[i];
		 if(leftSum==rightSum)
		 	return arr[i];
	}
	return -1;
}
int main(){
	init_code();
	vec arr;
	read(n);
	loop(i,n){
		read(var);
		arr.push_back(var);	
	}
	cout<<EquilibriumPoint(arr,n)<<endl;


	
}