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
	string str;
	cin>>str;
	cout<<"inside main"<<endl;
	string ans="";
	bool visited=false;
	    for(int j=0;j<str.size();j++){
	        if(str[j]=='+'){
	            int k=j+1;
	            while(k<str.size() and str[k]!='@')
	            {
	             k++;   
	            }
	            while(k<str.size()){
	                ans+=str[k];
	                k++;
	            }
	            break;
	            
	            
	        }
	        else if(str[j]=='@'){
	        	ans+=str[j];
	        	visited=true;
	        	continue;

	        }
	        else if(str[j]=='.' and !visited){
	            continue;
	            
	        }
	        ans+=str[j];
	              
	}
	cout<<ans<<endl;
	return 0;
}