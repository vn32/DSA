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
int solve(vector<int>& arr,int n){
    int i, total = 1;
     for (i = 2; i <= n; i++) {
        total += i;
        total -= arr[i - 2];
    }
    return total;

}
int main(){
	init_code();
	vec arr;
	read(n);
	loop(i,n){
		read(var);
		arr.push_back(var);	
	}
	cout<<solve(arr,n)<<endl;


	
}