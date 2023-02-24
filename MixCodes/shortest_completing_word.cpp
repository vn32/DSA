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
string shortestCompletingWord(string licensePlate, vector<string>& words) {
	int n=licensePlate.length(),m=words.size();
	



        
}
int main(){
	init_code();
	string licensePlate;
	cin>>licensePlate;
	vector<string> words;
	int n;
	cin>>n;
	loop(i,n)
	{
		string s;
		cin>>s;
		words.push_back(s);
	}
	cout<<shortestCompletingWord(licensePlate,words);



	
}