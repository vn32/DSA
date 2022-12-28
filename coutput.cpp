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
void f1(int i,int j,int k)
{
  cout<<i<<j<<k<<endl;
}
  
void f2(int i,int j,int k)
{
  cout<<i<<j<<k<<endl;
}

int main(){
	init_code();
  int i=10;
    f1(i++,i++,i++);
    cout<<i<<endl;
    i=10;
    f2(i++,i++,i++);
   cout<<i<<endl;
   return 0;
	


	
}