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
	string s1,s2;
	cin>>s1>>s2;
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	string ans="";
	int i=0,j=0;
	int sum=0,carry=0;
	while(i<s1.size() and j<s2.size()){
		 sum=s1[i]-'0'+s2[j]-'0'+carry;
		 carry=sum/10;
		 sum%=10;
		 ans=ans+to_string(sum);
		 i++;
		 j++;
	}
	while(i<s1.size()){
		sum=s1[i]-'0'+carry;
		carry=sum/10;
		sum%=10;
		ans=ans+to_string(sum);
		i++;
	}
	while(j<s2.size()){
		sum=s2[i]-'0'+carry;
		carry=sum/10;
		sum%=10;
		ans=ans+to_string(sum);
		j++;
	}
	if(carry)
		ans=ans+to_string(carry);

	reverse(ans.begin(),ans.end());
	cout<<ans<<endl;

	


	
}