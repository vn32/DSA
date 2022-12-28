//sliding window
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

int main(){
	init_code();
	vec arr;
	read(t);
	while(t--){
		string str;
		cin>>str;
		set<char> s;
		s.insert(str[0]);
		cout<<s.size();
		for(int i=1;i<str.size();i++){
			set<char> s;
			if(s.find(str[i])!=s.end()){
				for(auto ch:s)
					cout<<ch;
				cout<<endl;
			}
			else
				s.insert(str[i]);
		}

	}
	


	
}