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
const int N=1000;
int a[N];

//whether sum is possible from subset of a[.......index]
bool subsetSum(int index,int sum){
	//no elements left for the sum
	if(index==-1)
		return (sum==0);
	bool ans=false;
	//include the a[index] in the sum
	if(sum>=a[index]){
		ans|=subsetSum(index-1,sum-a[index]);
	}
	//exclude the a[index] in the sum
	ans|=subsetSum(index-1,sum);
	return ans;

}
int main(){
	init_code();
	int SUM,n;
	cin>>SUM>>n;
	loop(i,n){
		cin>>a[i];
	}
	cout<<subsetSum(n-1,SUM);

	

	
}