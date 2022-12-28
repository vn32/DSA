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
void solve(vector<int>& arr,int n){
	int mid=0,low=0,end=n-1;
	while(mid<=end){
		if(arr[mid]==0){
			swap(arr[mid],arr[low]);
			low++;
			mid++;
		}
		else if(arr[mid]==2){
			swap(arr[mid],arr[end]);
			end--;
		}
		else
			mid++;
	}
	for(auto x:arr)
		cout<<x<<endl;

}
int main(){
	init_code();
	vec arr;
	read(n);
	loop(i,n){
		read(var);
		arr.push_back(var);	
	}
	solve(arr,n);


	
}