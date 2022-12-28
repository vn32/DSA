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
		unordered_map<char,Node*> m;
		bool isTerminal=false;
	Node(char d){
		ch=d;
		isTerminal=false;
	}
};

class Trie{
public:
	Node* root;
	Trie(){
		root=new Node('\0'); 
	}
	//implement insert method
	void insert(string word){
		Node *temp=root;
		//iterate each char of word and insert into root
		for(auto ch:word){
			//check whether ch is present in root or not
			if(temp->m.count(ch)==0){
				//create a node
				Node *n=new Node(ch);
				//coonect this node to root
				temp->m[ch]=n;
			}
			//increment the temp pointer
			temp=temp->m[ch];
		}
		//mark the last one as end of this word
		temp->isTerminal=true;

	}

	//implement search method 
	bool search(string word){
		Node* temp=root;
		for(auto ch: word){
			if(temp->m.count(ch)==0)
				return false;
			temp=temp->m[ch];
		}
		//loop is over and temp will be point to somewhere at the terminal or non terminal eg news and new
	return temp->isTerminal;
		

	}
	
};

int main(){
	init_code();
	string words[]={"apple","ape","news","not","never"};
	Trie t;
	for(auto w: words){
		t.insert(w);
	}
	int q;
	cin>>q;
	string words_search;
	while(q--){
		cin>>words_search;
		if(t.search(words_search))
			cout<<"yes"<<endl;
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;



	
}
