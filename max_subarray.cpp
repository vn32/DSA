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
void solve(vector<int>& arr,int k){
	deque<int> Q(k);
	int i;
	for(i=0;i<k;i++){
		while(!Q.empty() and arr[i]>arr[Q.back()])
			Q.pop_back();
		Q.push_back(i);
	}
	while(i<arr.size()){
		cout<<arr[Q.front()]<<endl;
		//remove the elements which is out of window
		while(!Q.empty() and Q.front()<=(i-k))
			Q.pop_back();
		while(!Q.empty() and arr[i]>=arr[Q.back()])
			Q.pop_back();
		Q.push_back(i);
		i++;
	}


}
int main(){
	init_code();
	vec arr;
	Read(n,k);
	loop(i,n){
		read(var);
		arr.push_back(var);	
	}
	solve(arr,k);


	
}