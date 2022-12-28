#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(n) int n;cin>>n
#define Read(n,m) int n,m;cin>>n>>m
#define loop(x,n) for(int x = 0; x < n; ++x)
#define vec1 vector<int>
#define vec2d vector<vector<int>>
using namespace std;
void init_code() {
fast_io;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
//https://leetcode.com/problems/replace-words/description/
class Node{
	public:
		char ch;
		unordered_map<char,Node*> m;
		bool isTerminal=false;
		string str;
	Node(char d){
		ch=d;
		isTerminal=false;
		str="";
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
		temp->str=word;

	}
	void search(string word, string &ans){
		Node* temp=root;
		if(ans.length()>0)
			ans.append(" ");
		for(char ch: word){
			if(temp->m.count(ch)==0){
				break;
			}
			temp=temp->m[ch];
			if(temp->isTerminal){
				ans.append(temp->str);
				return;
			}
		}
		ans.append(word);
	}
};
vector<string> splitIntoWords(string str){
	vector<string> vec;
	string word = "";
    for (auto x : str)
    {
        if (x == ' ')
        {
            vec.push_back(word);
            word = "";
        }
        else {
            word = word + x;
        }
    }
    vec.push_back(word);
    return vec;
}

string replaceWords(vector<string> roots, string sentence) {
        Trie t;
        for (auto root: roots) 
        	t.insert(root);
        vector<string> words=splitIntoWords(sentence);
        string ans="";
 		for (auto word: words) {
 			t.search(word,ans);
        }
        return ans;
 }
        



int main(){
	init_code();
	string sentence="a aa a aaaa aaa aaa aaa aaaaaa bbb baba ababa";

	vector<string> dictionary{"a", "aa", "aaa", "aaaa"};
	cout<<replaceWords(dictionary,sentence)<<endl;
	
	return 0;	
}
