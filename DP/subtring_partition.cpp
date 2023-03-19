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
class Solution {
public:
	string s;
	map<int,vector<vector<string>>> mp;//to memoise
	bool is_palindrome(int i,int j){
		while(i<=j){
			if(s[i]!=s[j])
				return false;
			i++;
			j--;
		}
		return true;
	}

	vector<vector<string>> dp(int i){
		//base case. return empty string
		if(i==s.size())
			return vector<vector<string>>();
		if(mp.count(i))
			return mp[i];
		vector<vector<string>> ans;
		for(int j=i;j<s.size();j++){
			if(is_palindrome(i,j)){
				//now check for the j+1 index and onwards for the all possible partion
				vector<vector<string>> res=dp(j+1);
				//now res contains all the polindromic partition start from j+1
				//we have to add the substring i-j at the gate of the result of j+1 which is res
				string substring=s.substr(i,j-i+1);
				for(auto &x:res){
					//here &x means address of res vector , if we do x only then it will create a copy of that

					x.insert(x.begin(),substring);
				}
				// Important what if i==s.size() , then in res empty string will be present,individual characters also a palindrome
				if(res.empty()){
					res.push_back({substring});
				}
				//now push the toal string in ans
				for(auto x:res){
					ans.push_back(x);
				}


			}
		}
		return mp[i]=ans;
	}
    vector<vector<string>> partition(string s) {
    	this->s=s;
    	//start from index 0
    	return dp(0);
        
    }
};

int main(){
	init_code();
	string s;
	cin>>s;
	Solution H;
	vector<vector<string>> res=H.partition(s);
	for(auto x:res){
		for(auto substr:x){
			cout<<substr<<" ";
		}
		cout<<endl;
	}
	return 0;
	

	
}