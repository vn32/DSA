#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;
void init_code() {
fast_io;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
int main(){
	init_code();
	string s;
	cin>>s;
	stringstream ss(s);
	string token;
	while(getline(ss,token,' ')){
		cout<<token<<endl;
	}

	
}