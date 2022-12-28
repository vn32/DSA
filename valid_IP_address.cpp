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
int isValid(string s) {
    // code here
    int n=s.length();
    int i=0,countDot=0;
    vector<string> address;
    while(i<n){
        string temp="";
        while(i<n and s[i]!='.'){
            int ch=s[i]-'0';
            if(ch>=0 and ch<=9)
             temp+=s[i];
            else
            return 0;
            i++;
        }
        if(s[i]=='.')
            countDot++;
        if(!temp.empty())
        address.push_back(temp);
        i++;
        
    }
    if(countDot!=3 || address.size()!=4)
    return 0;
    for(auto str:address){
        if(str.size()>3)
        return false;
        //checking for the leading zero
       if(str.size()>1 and str[0]=='0')
       return false;
       if(convert(str)>255)
            return false;
       
    }
    return true;  
}
int main(){
    init_code();
    string s;
    cin>>s;
    cout<<isValid(s)<<endl;    
}
