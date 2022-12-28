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
	vec arr;
	int maxlength=0;
	loop(i,n){
		read(var);
		arr.push_back(var);

	}
	for(int i=1;i<n-1;){
		    if(arr[i-1]<arr[i] and arr[i]>arr[i+1]){
                int cnt=1;
                int j=i;
                while(j>=1 and arr[j-1]<arr[j]){
                    cnt++;
                    j--;
                }
                while(i<n-1 and arr[i]>arr[i+1]){
                    cnt++;
                    i++;
                }
                maxlength=max(cnt,maxlength);
		}else
            i++;

	}
	cout<<maxlength<<endl;


	
}