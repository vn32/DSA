#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
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
	int n,sum,temp;
	cin>>n;
	cin>>sum;
	vector<int> arr;
	for(int i=0;i<n;i++){
		cin>>temp;
		arr.push_back(temp);
	}
	unordered_set<int> s;

	for(int i=0;i<n;i++){
		int x=sum-arr[i];
		if(s.find(x)!=s.end()){
			s.insert(x);
			s.insert(arr[i]);
			cout<<x<<" "<<arr[i]<<endl;
		}
		s.insert(arr[i]);
	}


	

}