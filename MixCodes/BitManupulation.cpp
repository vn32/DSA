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
//i start from 0 1 2 ....
int getIthBit(int n,int i){
	int mask=(1<<i);
	//if mask is greater tha 0 then 1 else 0
	return (mask & n)>0?1:0;
	
}
//
int clearIthBit(int &n,int i){
	int mask = ~(1<<i);
	//let say i=2 so mask=11111011
	n = n & mask;
	return n;
	
}
int setIthBit(int &n,int i){
	int mask = (1<<i);
	//take the or
	n = n | mask;
	return n;
	
}
//update
int updateIthBit(int n,int i,int v){
	//two step process
	//1. clear the ith bit first
	clearIthBit(n,i);
	//2.set the ith bit with value v
	int mask = (v<<i);
	n=n | mask;
	return n;

}
int main(){
	init_code();
	int n,i;
	cin>>n>>i;
	/*cout<<getIthBit(n,i)<<endl;
	cout<<clearIthBit(n,i)<<endl;
	cout<<setIthBit(n,i)<<endl;*/

	//update ith bit to v
	int v;
	cin>>v;
	cout<<updateIthBit(n,i,v)<<endl;


	
}