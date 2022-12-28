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
 bool isValid(string s) {
        stack<char> a;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                a.push(s[i]);
            else if(s[i]=='{')
                a.push(s[i]);
            else if(s[i]=='[')
                a.push(s[i]);
            else {
                if(!a.empty() and s[i]==')' and a.top()=='(')
                    a.pop();
                else if(!a.empty() and s[i]=='}' and a.top()=='{')
                    a.pop();
                else if(!a.empty() and s[i]==']' and a.top()=='[')
                    a.pop();
                else
                    return false;  
            }  
        }
        if(a.size()>0)
            return false;
        return true;
        
    }
    int main(){
	init_code();
	int t;
	cin>>t;
	while(t--){
	string str;
	cin>>str;
	cout<<isValid(str)<<endl;

	}



	
}