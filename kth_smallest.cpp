#include<bits/stdc++.h>
using namespace std;
int kthSmallest(vector<int> arr,int n,int k){
	priority_queue<int> maxHeap;
	for(int i=0;i<n;i++){
		maxHeap.push(arr[i]);
		if(maxHeap.size()>k)
			maxHeap.pop();
	}
	return maxHeap.top();
}
void kClosest(vector<int> arr,int n,int k,int X){
	priority_queue<pair<int,int>> maxHeap;
	for(int i=0;i<n;i++){
		maxHeap.push({abs(arr[i]-X),arr[i]});
		if(maxHeap.size()>k)
			maxHeap.pop();
	}
	while(!maxHeap.empty()){
		cout<<maxHeap.top().second<<endl;
		maxHeap.pop();

	}
}
int kthLargest(vector<int> arr,int n,int k){
	priority_queue<int,vector<int>,greater<int>> minHeap;
	for(int i=0;i<n;i++){
		minHeap.push(arr[i]);
		if(minHeap.size()>k)
			minHeap.pop();
	}
	return minHeap.top();
}

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n,k,temp,X;
	cin>>n>>k>>X;
	vector<int> arr;
	for(int i=0;i<n;i++){
		cin>>temp;
		arr.push_back(temp);
	}
	cout<<"kth smallest number is : "<<kthSmallest(arr,n,k)<<endl;
	cout<<"kth largest number is : "<<kthLargest(arr,n,k)<<endl;
	cout<<"k closest element to a number X"<<endl;
	kClosest(arr,n,k,X);
	cout<<"Time complexity is O(nlogk)"<<endl;
}