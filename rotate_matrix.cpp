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
int main(){
	init_code();
	int n,m,var,R,C;
	cin>>m>>n;
	R=m;
	C=n;
	vector<vector<int>> arr;
	for(int i=0;i<m;i++){
		vector<int> temp;
		for(int j=0;j<n;j++){
			cin>>var;
			temp.push_back(var);
		}
		arr.push_back(temp);
	}
		for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"**************"<<endl;
	int row=0,col=0,prev,curr;
	while(row<m and col<n){
		//check point
		if(row+1==m || col+1==n)
			break;
		//take the prev element
		prev=arr[row+1][col];

		//rotate the first row
		for(int i=col;i<n;i++){
			curr=arr[row][i];
			arr[row][i]=prev;
			prev=curr;
		}
		++row;

		//rotate the last column
		for(int i=row;i<m;i++){
			curr=arr[i][n-1];
			arr[i][n-1]=prev;
			prev=curr;

		}
		--n;

		//rotate the bottm row
		if(row<m){
			for(int i=n-1;i>=col;i--){
				curr=arr[m-1][i];
				arr[m-1][i]=prev;
				prev=curr;
			}
		}
		--m;
		//rotate the first col
		if(col<n){
			for(int i=m-1;i>=row;i--){
				curr=arr[i][col];
				arr[i][col]=prev;
				prev=curr;
			}
		}
		++col;

	}
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	


	
}