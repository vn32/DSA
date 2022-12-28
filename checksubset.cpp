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
bool isSubset(string a,string b){
	vector<int> arr(26,0);
	for(int i=0;i<a.length();i++){
		arr[a[i]-'a']++;
	}
	for(int i=0;i<b.length();i++){
		arr[b[i]-'a']--;
	}
	for(int i=0;i<26;i++){
		if(arr[i]<0)
		{
			return false;
		}
	}
	return true;
}
bool isSubset2(string a,string b){
	int i=0,j=0;
	while(i<a.length() and j<b.length()){
		if(a[i]==b[j]){
			i++;
			j++;
		}
		else
		i++;
	}
	if(j==b.length())
		return true;
	return false;
}
int main(){
	init_code();
	string a,b;
	cin>>a>>b;
	cout<<isSubset(a,b)<<endl;
	cout<<isSubset2(a,b)<<endl;



	

	
}