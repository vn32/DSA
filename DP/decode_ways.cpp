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
//https://leetcode.com/problems/decode-ways/
string s;
vector<int> memo;
int numDecodings(int i){
	if(i==s.size())
		return 1;
	if(memo[i]!=-1)
		return memo[i];
	int ans=0;
	if(s[i]>='1' && s[i]<='9'){
		ans+=numDecodings(i+1);
	}
	if(i+1<s.size() && s[i]=='1'){
		ans+=numDecodings(i+2);
	}
	if(i+1<s.size() && (s[i]=='2' && s[i+1]<='6')){
		ans+=numDecodings(i+2);
	}
	return memo[i]=ans;
}

int main(){
	init_code();

		cin>>s;
		memo.clear();
		memo.resize(s.size(),-1);
		cout<<s<<endl;
		cout<<numDecodings(0)<<endl;

	

	
}