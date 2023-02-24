#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(n) int n;cin>>n
#define loop(x,n) for(int x = 0; x < n; ++x)
#define Loop(x,y,n) for(int x = y; x < n; ++x)
#define vec vector<int>

using namespace std;
void init_code() {
fast_io;
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}
int main(){
	init_code();
	read(n);
	vec arr,left,right;
	loop(i,n){
		read(var); 
		arr.push_back(var); 
		left.push_back(0);
		right.push_back(0);  
	}
	left[0]=arr[0];
	right[n-1]=arr[n-1];
	for(int i=1;i<n;i++){
		left[i]=max(arr[i],left[i-1]);
		right[n-1-i]=max(arr[n-i-1],right[n-i]);
	}
	int ans=0;
	loop(i,n){
		ans+=min(left[i],right[i])-arr[i];
	}
	cout<<ans<<endl;



	
}