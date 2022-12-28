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
	bool temp[s.size()][s.size()];
	memset(temp,false,sizeof(temp));
	int ans=0;
	for(int g=0;g<s.size();g++){
		for(int i=0,j=g;j<s.size();i++,j++){
			if(g==0)
				temp[i][j]=true;
			else if(g==1){
				if(s[i]==s[j])
					temp[i][j]=true;
				else
					temp[i][j]=false;
			}
			else{
				if(s[i]==s[j] and temp[i+1][j-1])
					temp[i][j]=true;
				else
					temp[i][j]=false;
			}
			if(temp[i][j])
				ans++;
		}
	}
	return ans-s.size();

}
int main(){
	init_code();
	string s;
	cin>>s;
	cout<<solve(s)<<endl;


	
}