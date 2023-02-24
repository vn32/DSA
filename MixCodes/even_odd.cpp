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
	vector<int> even,odd;
	for(int i=0;i<n;i++){
		if(i%2==0)
			even.push_back(arr[i]);
		else
			odd.push_back(arr[i]);
	}
	sort(even.begin(),even.end());
	sort(odd.begin(),odd.end());
	int even_size=0;
	int odd_size=0;
	for(int i=0;i<n;i++){
		if(i & 1){
			arr[i]=odd[odd_size++];

		}
		else{
			arr[i]=even[even_size++];
		}
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";


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