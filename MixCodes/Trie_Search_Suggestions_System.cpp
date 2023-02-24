//https://leetcode.com/problems/search-suggestions-system/
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
class Node{
	public:
		char ch;
		unordered_map<char,Node*> children;
		bool isTerminal;

		Node(char data){
			this->ch=data;
			this->isTerminal=false;

		}

};
class Trie{
	public:
		Node* root;
		Trie(){
			root=new Node('\0');
		}
		void insert(string word){
			Node *temp=root;
			for(auto ch:word){
				if(temp->children.count(ch)==0){
					temp->children[ch]=new Node(ch);
				}
				temp=temp->children[ch];
			}
			temp->isTerminal=true;
		}
		void dfs(Node *temp,string &prefix,vector<string>& result){
			if(result.size()==3)
				return;
			if(temp->isTerminal){
				result.push_back(prefix);
			}
			//search lexicographically
			for(char ch='a';ch<='z';ch++){
				if(temp->children.count(ch)){
					prefix+=ch;
					dfs(temp->children[ch],prefix,result);
					prefix.pop_back();
				}
			}
		}
		vector<string> getPrefixWord(string prefix){
			vector<string> result={};
			Node* temp=root;
			//iterate the prefix and reach to that node in the trie
			for(auto ch:prefix){
				if(temp->children.count(ch)==0)
					return result;
				temp=temp->children[ch];
			} 
			dfs(temp,prefix,result);
			return result;
		}


};
void suggestedProducts(vector<string>& products, string searchWord) {
	vector<vector<string>> output;
	Trie t;
	//Build the prefix tree by inserting the words into trie
	for(auto word:products){
		t.insert(word);
	}
	//iterate over the searchword
	string prefix;
	for(auto ch:searchWord){
		prefix+=ch;
		//get the output of searching the prefix
		output.push_back(t.getPrefixWord(prefix));
	}
	for(auto child:output){
		for(auto str:child){
			cout<<str<<" ";
		}
		cout<<endl;
	}
}
int main(){
	init_code();
	vector<string> products{"mobile","mouse","moneypot","monitor","mousepad"};
	string searchWord="mouse";
	suggestedProducts(products,searchWord);

	


	
}