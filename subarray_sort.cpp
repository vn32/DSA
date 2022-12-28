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
bool outofOrder(vector<int>& arr,int i){
	int x=arr[i];
	if(i==0)
		return x>arr[1];
	if(i==arr.size()-1)
		return x<arr[i-1];
	return x>arr[i+1] or x<arr[i-1];
}
int main(){
	init_code();
	read(n);
	vec arr;
	loop(i,n){
		read(var);
		arr.push_back(var);	
	}
	int smallest=INT_MAX,largest=INT_MIN;
	loop(i,n){
		int x=arr[i];
		if(outofOrder(arr,i)){
			smallest=min(smallest,arr[i]);
			largest=max(largest,arr[i]);
		}
	}
	if(smallest==INT_MAX)
		cout<<0<<endl;
	int left=0,right=arr.size()-1;
	while(smallest>=arr[left])
		left++;
	while(largest<=arr[right])
		right--;
	cout<<(right-left+1)<<endl;



	
}