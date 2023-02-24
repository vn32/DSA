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
//https://leetcode.com/problems/remove-sub-folders-from-the-filesystem/description/

class Node{
public:
	char ch;
	unordered_map<char,Node*> children;
	bool isTerminal;
	string str;
	Node(char ch){
		this->ch=ch;
		this->isTerminal=false;
		this->str="";

	}
};
class Trie{
public:
	Node* root;
	Trie(){
		root=new Node('\0');
	}

	void insert(string word){
		Node* temp=root;
		for(auto ch:word){
			if(temp->children.count(ch)==0){
				temp->children[ch]=new Node(ch);
			}
			temp=temp->children[ch];
		}
		temp->isTerminal=true;
		temp->str=word;
	}

	bool isNotValid(string word){
		Node* temp=root;
		int count=0;
		for(auto ch:word){
			if(temp->isTerminal)
				count++;
			temp=temp->children[ch];
		}
		if(count!=1)
			return false;
		return true;
	}

};

vector<string> removeSubfolders(vector<string>& folder) {
	Trie t;
	for(auto word:folder){
		t.insert(word);
	}
	//iterate over the folder to check whether this tring should be deleted or not

	vector<string> output(folder.begin(),folder.end());
	for(auto word:output){
		if(t.isNotValid(word)){
			folder.erase(remove(folder.begin(), folder.end(),word), folder.end());
		}
	}
	return folder;
        
}
int main(){
	init_code();
	//remove any element from a vector by value
	// vector<string> str{"vikas","nishad","vn32","love","love"};
	// str.erase(remove(str.begin(), str.end(), "love"), str.end());
	// for(auto child:str)
	// 	cout<<child<<endl;
	vector<string> folders{"/a","/a/b","/c/d","/c/d/e","/c/f"};
	vector<string> output=removeSubfolders(folders);
	for(auto child:output)
		cout<<child<<endl;	
}