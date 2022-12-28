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

void dec(int n){
	if(n<1)
		return;
	cout<<n<<endl;
	dec(--n);

}
void inc(int n){
	if(n<1)
		return;
	inc(--n);
	cout<<n+1<<endl;
	

}
int pow1(int n,int x){
	if(x==0)
		return 1;
	return n*pow1(n,x-1);
}

int main(){
	init_code();
	/*int n=5;
	inc(n);
	cout<<"dec "<<endl;
	dec(n);*/
	int n,x;
	cin>>n>>x;
	cout<<pow1(n,x);


	
}