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
double solve(vector<int>& arr,int k){
	int n=arr.size(),i=0,j=0;
	double avg=0,sum=0;
	while(j<k){
		sum+=arr[j];
		j++;
	}
	avg=sum/k;
	for(int j=k;j<n;j++){
		sum+=arr[j];
		sum-=arr[i];
		i++;
		double temp=sum/k;
		if(temp>avg)
			avg=temp;
	}
	return avg;


}
int main(){
	init_code();
	vec arr;
	Read(n,k);
	loop(i,n){
		read(var);
		arr.push_back(var);	
	}
	cout<<solve(arr,k)<<endl;


	
}