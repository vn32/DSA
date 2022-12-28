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
	int data;
	Node* left=NULL;
	Node* right=NULL;
	Node(int d){
		data=d;
		left=NULL;
		right=NULL;

	}
};
Node* buildTree(){
	int d;
	cin>>d;
	//cout<<d<<endl;
	if(d==-1)
		return NULL;
	Node* n=new Node(d);
	n->left=buildTree();
	n->right=buildTree();
	return n;

}
void levelorderTraversal(Node * root){
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		Node* n=q.front();
		if(n==NULL){
			cout<<endl;
			q.pop();
			if(!q.empty())
				q.push(NULL);
		}
		else{
			q.pop();
			cout<<n->data<<" ";
			if(n->left!=NULL)
			q.push(n->left);
			if(n->right!=NULL)
			q.push(n->right);
		}
	}
	return ;
}
int main(){
	init_code();
	Node * root=buildTree();
	levelorderTraversal(root);



	
}