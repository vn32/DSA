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
void solve(vector<int>& arr,int n,int sum){
	int start=0,i=0,curr_sum=0;
	while(i<n){
		curr_sum+=arr[i];
		//curr_sum>sum
		while(curr_sum>sum and start<i){
			curr_sum-=arr[start++];
		}

		//curr_sum is eqaul to sum
		if(curr_sum==sum)
		{
			cout<<start+1<<" "<<i+1<<endl;
			break;
		}
		i++;
	}
	


}
int main(){
	init_code();
	vec arr;
	Read(n,sum);
	loop(i,n){
		read(var);
		arr.push_back(var);	
	}
	solve(arr,n,sum);


	
}