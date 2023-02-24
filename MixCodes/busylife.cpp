#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(n) int n;cin>>n
#define Read(n,m) int n,m;cin>>n>>m
#define loop(x,n) for(int x = 0; x < n; ++x)
#define vec vector<int>
using namespace std;
void init_code() {
fast_io;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
bool comp(pair<int,int>& a,pair<int,int>& b){
	return (a.second<b.second);
}
int solve(vector<pair<int,int>>& arr,int n){
	int ans=0,end=-1;
	sort(arr.begin(),arr.end(),comp);
	loop(i,n){
		if(arr[i].first>=end){
			ans++;
			end=arr[i].second;
			cout<<arr[i].first<<" "<<arr[i].second<<endl;
		}
	}
	return ans;
	
}
int main(){
	init_code();
	vector<pair<int,int>> arr;
	read(n);
	loop(i,n){
		Read(a,b);
		arr.push_back(make_pair(a,b));	
	}
	cout<<solve(arr,n)<<endl;


	
}