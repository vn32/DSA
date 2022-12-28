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
string solve(string str){
	int i=0,j=0,start_window=0,window_length=0,max_window_length=-1;
	unordered_map<char,int> mp;
	while(j<str.length()){
		//if str[j] is present in the hashmap and idx>=start of current window
		if(mp.count(str[j]) and mp[str[j]]>=i){
			i=mp[str[j]]+1;
			window_length=j-i;

		}

		mp[str[j]]=j;
		j++;
		window_length++;
		if(window_length>max_window_length){
			start_window=i;
			max_window_length=window_length;
		}
	}
	return str.substr(start_window,max_window_length);


}
int main(){
	init_code();
	int t;cin>>t;
	while(t--){
		string s;
	cin>>s;
	cout<<solve(s)<<endl;

	}

	

	
}