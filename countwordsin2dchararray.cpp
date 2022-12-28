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
int solve(int i,int j,vector<vector<char>>& board,string s,int idx){
	int found=0;
	if(i>=0 and j>=0 and i<board.size() and j<board[0].size() and s[idx]==board[i][j]){
		char temp=s[idx];
		board[i][j]='0';
		++idx;
		if(idx==s.size()){
			found= 1;
		}else{
			found+=solve(i-1,j,board,s,idx);
			found+=solve(i,j+1,board,s,idx);
			found+=solve(i+1,j,board,s,idx);
			found+=solve(i,j-1,board,s,idx);
		}
		board[i][j]=temp;
	}
	return found;
}
vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
	vector<string> ans;
    for(int k=0;k<words.size();k++){
    	bool isWordFound=false;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
            	if(solve(i,j,board,words[k],0)){
            		isWordFound=true;
            		break;
            	}
            }
            if(isWordFound)
            	break;
        }
        if(isWordFound)
        	ans.push_back(words[k]);   
    }
    return ans;   
}

int main(){
	init_code();
	vector<vector<char>> charArray;
	Read(n,m);
	loop(i,n){
		vector<char> arr;
		loop(j,m){
			char ch;
			cin>>ch;
			arr.push_back(ch);
		}
		charArray.push_back(arr);		
	}
	read(k);
	vector<string> words;
	loop(i,k){
		string s;
		cin>>s;
		words.push_back(s);
	}
	vector<string> ans=findWords(charArray,words);
	for(auto x:ans)
		cout<<x<<endl;	
}