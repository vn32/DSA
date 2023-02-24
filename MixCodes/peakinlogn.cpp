#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(n) int n;cin>>n
#define loop(x,n) for(int x = 0; x < n; ++x)
#define vec vector<int>
using namespace std;
void init_code() {
fast_io;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
//returns index of peak element
int peak(vector<int>& arr,int low,int high,int n){
    int mid=low+(high-low)/2;
    if((mid==0 || arr[mid]>=arr[mid-1] )and(mid==n-1 || arr[mid+1]<=arr[mid]))
        return mid;
    else if(mid>0 and arr[mid-1]>arr[mid])
        return peak(arr,low,mid-1,n);
    else
        return peak(arr,mid+1,high,n);
        
    }
void solve(vector<int>& arr,int n){
	cout<<peak(arr,0,n-1,n)<<endl;
	
}
int main(){
	init_code();
	vec arr;
	read(n);
	loop(i,n){
		read(var);
		arr.push_back(var);	
	}
	solve(arr,n);


	
}