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
int main(){
	init_code();
	char str[100];
	cin.getline(str,100);
	//count space
	int space=0;
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==' ')
			space++;
	}
	//we have to replace "%20" so 2 more character per space
	int index=strlen(str)+2*space;
	str[index]='\0';
	for(int i=strlen(str)-1;i>=0;i--){
		if(str[i]==' '){
			str[index-1]='0';
			str[index-2]='2';
			str[index-3]='%';
			index=index-3;

		}
		else{
			str[index-1]=str[i];
			index--;
		}
	}
	cout<<str<<endl;


	


	
}
//input: I am Vikas
//output: I%20am%20Vikas
