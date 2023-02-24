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
int partition(vector<int>& arr,int l,int r){
    int i=l-1;
    int p=arr[r];
    for(int j=l;j<r;j++){
        if(arr[i]<p){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[r]);
    return i;
    
}
int kthSmallest(vector<int>& arr, int l, int r, int k) {
    //code here
    
    int d=partition(arr,l,r);
    cout<<"partition value: "<<d<<endl;
    if(d==k)
    return arr[d];
    else if(k<d)
    return kthSmallest(arr,l,d-1,k);
    else
    return kthSmallest(arr,d+1,r,k);
    
    
}
int main(){
	init_code();
	vec arr;
	read(n);
	loop(i,n){
		read(var);
		arr.push_back(var);	
	}
	cout<<"answer is: "<<kthSmallest(arr,0,n-1,3)<<endl;
	
	


	
}