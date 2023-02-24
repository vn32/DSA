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
bool solve(string s1,string s2){
	int n=s1.size(),m=s2.size();
	if(n<m)
		return false;
	int i=0,j=0;
	while(i<n and j<m){
		if(s1[i]==s2[j]){
			i++;
			j++;
		}
		else
			i++;
	}
	if(j==m)
		return true;
	return false;

}
int main(){
	init_code();
	string s1,s2;
	cin>>s1>>s2;
	cout<<solve(s1,s2)<<endl;

//second string is subsequence of first one.
	
}