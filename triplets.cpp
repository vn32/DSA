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
	int n,sum,var,target;
	cin>>n>>sum;
	vector<int> arr;
	for(int i=0;i<n;i++){
		cin>>var;
		arr.push_back(var);
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<n-3;i++){
		int j=i+1;
		int k=n-1;
		while(j<k){
			int current_sum=arr[i];
			current_sum+=arr[j];
			current_sum+=arr[k];
			if(current_sum==sum){
				cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
				j++;
				k--;
			}
			else if(current_sum>sum)
				k--;
			else
				j++;
		}
		

	}
	cout<<"completed"<<endl;
	
}