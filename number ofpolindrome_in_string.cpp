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
int solve(string s){
	int low=0,high=0,start=0,ans=INT_MIN,n=s.size();
	set<string> x;
	for(int i=0;i<s.size();i++){
		low=i-1;
		high=i+1;
		while(low>=0 and s[low]==s[i])
			low--;
		while(high<s.size() and s[i]==s[high])
			high++;
		while(low>=0 and high<n and s[low]==s[high])
		{
			low--;
			high++;
		}
		int length=high-low-1;
		if(length>ans){
			ans=length;
			start=low+1;
			x.insert(s.substr(start,ans));
		}
	}
	for(auto p:x){
		cout<<p<<endl;
	}
	return x.size();

}
int main(){
	init_code();
	string s;
	cin>>s;
	cout<<solve(s)<<endl;


	
}