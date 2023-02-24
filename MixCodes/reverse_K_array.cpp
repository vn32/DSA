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
void solve(vector<int>& arr,int n,int k){
	for(int i=0;i<n;i+=k){
		int left=i;
		// to handle case when k is not multiple of n
		int right=min(i+k-1,n-1);
		while(left<right){
			swap(arr[left++],arr[right--]);
		}

	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<endl;

}
int main(){
	init_code();
	vec arr;
	Read(n,k);
	loop(i,n){
		read(var);
		arr.push_back(var);	
	}
	solve(arr,n,k);


	
}