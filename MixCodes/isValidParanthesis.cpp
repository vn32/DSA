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
    bool cmp(char b,char c)
    {
        if(b=='{' && c=='}')
            return true;
        else if(b=='[' && c==']')
            return true;
        else if(b=='(' && c==')')
            return true;
         return false;
    }
    bool ispar(string x)
    {
        stack<char> s;
        
        //iterating over the string.
        for(int i=0;i<x.size();i++)
        {
            //if opening bracket is encountered, we push it into stack.
            if(x[i]=='[' || x[i]=='{' || x[i]=='(')
                s.push(x[i]);
            
            //if closing bracket is encountered, we compare it with top of stack.
            else if(x[i]==']' || x[i]=='}' || x[i]==')')
            {
                //if top of stack has opening bracket of different
                //type, we return false.
                if(s.empty() || !cmp(s.top(),x[i])) 
                    return false;
                //else we pop the top element from stack.
                else
                    s.pop();
            }
        }
        //if stack becomes empty, we return true else false.
        if(s.empty())
            return true;
        else
            return false;
    }
void convert(string s) 
{ 
    // Initialize a variable 
    int num = 0; 
    int n = s.length(); 
  
    // Iterate till length of the string 
    for (int i = 0; i < n; i++) 
  
        // Subtract 48 from the current digit 
        num = num * 10 + (s[i] - '0'); 
  
    // Print the answer 
    cout << num; 
}
int main(){
	init_code();
	string s;
	cin>>s;
	// cout<<ispar(s)<<endl;
	convert(s);
	


	
}