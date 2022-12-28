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
};
void searchHelper(Trie t,string document,int i,unordered_map<string,bool> &targetValues){
		Node* temp=t.root;
		//start iterating from i to end to check whther a substr of document is present in Trie or not
		for(int j=i;j<document.length();j++){
			char ch=document[j];
			if(temp->m.count(ch)==0){
				return;
			}
			temp=temp->m[ch];
			if(temp->isTerminal){
				string string_found=document.substr(i,j-i+1);
				targetValues[string_found]=true;
			}
		}
		return;
	}
void documentSearch(string document,vector<string> words){
		Trie t;
		//insert words into try
		for(auto word:words){
			t.insert(word);
		}
		//searching with the help of searcher fn
		unordered_map<string,bool> targetValues;
		//iterate over the document and check for each substr starting from 0 to end
		for(int i=0;i<document.length();i++){
			searchHelper(t,document,i,targetValues);
		}

		for(auto word:words){
			if(targetValues[word]){
				cout<<word<<" : "<<"true"<<endl;
			}
			else{
				cout<<word<<" : "<<"false"<<endl;
			}
		}
		return;
	}

int main(){
	init_code();
	string document="little cute cat loves to code in c++, java & pythod";
	vector<string> words{"cute cat","ttle","cat","quick","big"};
	documentSearch(document,words);
	
	return 0;	
}
