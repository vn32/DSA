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
int solve(vector<int>& arr,int n){

}
int main(){
	init_code();
	string str,pattern;
	vector<int> result;
	int start=0,j=0,cnt=0,ans=0;
	cin>>str>>pattern;
	unordered_map<char,int> pat,FS;
	for(char ch:pattern){
		pat[ch]++;
	}
	for(int j=0;j<str.size();j++){
		char ch=str[j];
		FS[ch]++;
		if(pat.count(ch)>0 and FS[ch]<=pat[ch])
			cnt++;
		if(cnt==pattern.length()){
			while(pat[str[start]]==0 or FS[str[start]]>pat[str[start]]){
				FS[str[start]]--;
				start++;

			}
			// //count number of anagrams
			// if(pat==FS)
			// 	ans++;

			//return start index of pattern's anagram in str in vector
			if(pat==FS)
				result.push_back(start);

		}

	}
	for(auto value:result)
		cout<<value<<endl;
	// cout<<ans<<endl;



	




	
}