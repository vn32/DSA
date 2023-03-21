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
string s="aaaa";
bool is_palindrome(int i,int j){
	if(i<0 || j>=s.size())
	return true;
	if(s[i]!=s[j])
		return false;
	return is_palindrome(i++,j--);
}

int main(){
	init_code();
	cout<<"Hello"<<endl;
	for(int i=0;i<4;i++){
		if(is_palindrome(i,3))
			
	}
	
	

	
}