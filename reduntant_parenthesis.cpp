#include<bits/stdc++.h>
using namespace std;
bool isRedundant(string str){
	stack<char> s;
	for(auto ch:str){
		if(ch!=')')
			s.push(ch);
		else{
			bool operator_found=false;
			while(!s.empty() and s.top()!='('){
				char ch=s.top();
				if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
					operator_found=true;
				}
				s.pop();
			}
			if(operator_found==false)
				return true;
		}

	}
	return false;

}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	string s;
	cin>>s;
	if(isRedundant(s))
		cout<<"Given string is Redundant"<<endl;
	else
		cout<<"Given string is not Redundant"<<endl;

}