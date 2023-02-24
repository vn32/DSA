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
int convert(string s) 
{ 
    int num = 0; 
    int n = s.length(); 
    for (int i = 0; i < n; i++) 
        num = num * 10 + (s[i] - '0'); 
    return num; 
}
int mulString(string s1,string s2){
	return convert(s1)*convert(s2);
}
int main(){
	init_code();
	string s1,s2;
	cin>>s1>>s2;
	cout<<mulString(s1,s2)<<endl;



	
}