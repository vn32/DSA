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
void./ solve(string s1,string s2){
	int n=s1.size(),m=s2.size();
	int t[n+1][m+1];
	memset(t,-1,sizeof(t));
	for(int i=0;i<n+1;i++){
		for(int j=0;j<m+1;j++){
			if(i==0 or j==0)
			{
				t[i][j]=0;
				continue;
			}
			if(s1[i-1]==s2[j-1])
				t[i][j]=1+t[i-1][j-1];
			else
				t[i][j]=max(t[i-1][j],t[i][j-1]);
		}
	}
	int index=t[n][m];
	char lcs[index+1];
	lcs[index]='\0';
	index--;
	int i=n,j=m;
	while(i>0 and j>0){
		if(s1[i-1]==s2[j-1]){
			lcs[index]=s1[i-1];
			i--;
			j--;
			index--;
		}
		else if(t[i-1][j]>t[i][j-1])
			i--;
		else
			j--;

	}
	cout<<t[n][m]<<" "<<lcs<<endl;



}
int main(){
	init_code();
	string s1,s2;
	cin>>s1>>s2;
    solve(s1,s2);


	
}