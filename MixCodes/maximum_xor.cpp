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
		Node* left;
		Node* right;
	
};

class Trie{
public:
	Node* root;
	Trie(){
		root=new Node(); 
	}
	//implement insert method
	void insert(int word){
		Node *temp=root;
		for(int i=31;i>=0;i--){
			int bit=(word>>i) & 1;
			if(bit==0){
				if(temp->left==NULL){
					temp->left=new Node();
				}
				//goto that bit
				temp=temp->left;
			}
			else{
				if(temp->right==NULL){
					temp->right=new Node();
				}
				temp=temp->right;
			}
		}

	}
	int max_xor_helper(int value){
		int current_ans=0;
		Node* temp=root;
		for(int i=31;i>=0;i--){
			int bit=(value>>i) & 1;
			if(bit==0){
				//find the opp bit
				if(temp->right!=NULL){
					temp=temp->right;
					current_ans+=(1<<i);
				}else{
					temp=temp->left;
				}
			}else{
				//look for 0
				if(temp->left!=NULL){
					temp=temp->left;
					current_ans+=(1<<i);
				}else{
					temp=temp->right;
				}

			}
		}
		return current_ans;
	}
	int max_xor(vector<int> input,int n){
		int max_xor_found=0;
		for(auto number:input){
			insert(number);
			int current_xor=max_xor_helper(number);
			max_xor_found=max(max_xor_found,current_xor);
		}
		return max_xor_found;
	}
	
};

int main(){
	init_code();
	vector<int> input{3,10,5,25,9,2};
	Trie t;
	cout<<t.max_xor(input,6);

	return 0;



	
}
