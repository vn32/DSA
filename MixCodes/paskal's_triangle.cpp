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
int solve(vector<int>& arr,int n){

}
int main(){
	init_code();
	read(n);
     vector<vector<int>> ans;
     ans.push_back(vector<int>(1,1));
     for(int i=1;i<n;i++){
     	vector<int> temp;
        temp.push_back(1);
     	for(int j=1;j<i;j++){
     		temp.push_back(ans[i-1][j-1]+ans[i-1][j]);
     	}
     	temp.push_back(1);
     	ans.push_back(temp);

     }
     for(int i=0;i<ans.size();i++){
     	for(int j=0;j<ans[i].size();j++){
     		cout<<ans[i][j]<<" ";
     	}
     	cout<<endl;
     }



	
}