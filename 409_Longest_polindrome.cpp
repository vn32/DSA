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
	int isOdd=0,isEven=0,ans=0;
	int n=s.size();
	unordered_map<char,int> mp;
	for(int i=0;i<n;i++){
		mp[s[i]]++;
	}
	for(auto i:mp){
		if(i.second & 1)
			ans+=(i.second/2)*2;
		else
			ans+=i.second;
	}
	if(ans<n)
	return ans+1;
	return ans;
}
int main(){
	init_code();
	string s;
	cin>>s;
	cout<<solve(s);


	
}
/*Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

 

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation:
One longest palindrome that can be built is "dccaccd", whose length is 7.*/