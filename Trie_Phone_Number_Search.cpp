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
string keypad[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
//words that can be found "IN" the phone number not necessarily EQUAL
//good problem, take unordered set to avoid duplicates
class Node{
	public:
		char ch;
		unordered_map<char,Node*> m;
		bool isTerminal=false;
		string s;
	Node(char d){
		ch=d;
		isTerminal=false;
		s="";
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
				temp->m[ch]=new Node(ch);
			}
			//increment the temp pointer
			temp=temp->m[ch];
		}
		//mark the last one as end of this word
		temp->isTerminal=true;
		temp->s=word;

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
void validWords(Node* t,string phoneNumber,int i,unordered_set<string>& output){
	//base cases
	if(t->isTerminal)
		output.insert(t->s);
	if(i==phoneNumber.length())
		return;
	//get the digit to explore
	int digit=phoneNumber[i]-'0';
	for(int j=0;j<keypad[digit].length();j++){
		char ch=keypad[digit][j];
		if(t->m.count(ch)!=0){
			validWords(t->m[ch],phoneNumber,i+1,output);
		}
	}
	return;

}

void filterNames(string phoneNumber, vector<string> words){
	Trie t;
	for(auto word:words){
		t.insert(word);
	}
	unordered_set<string> output;
	for(int i=0;i<phoneNumber.length();i++){
		validWords(t.root,phoneNumber,i,output);
	}
	for(auto str:output){
		cout<<str<<endl;
	}
}

int main(){
	init_code();
	string phoneNumber="7728335";
	vector<string> words{"prat","prateek","codingminutes","code","prat335", "teek"};
	filterNames(phoneNumber,words);

	
	
	return 0;



	
}
