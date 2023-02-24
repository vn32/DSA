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
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        int idx=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        //left
        vector<int> ans;
        if(idx==0){
            for(int i=0;i<k;i++)
                ans.push_back(arr[i]);
            
        }
        else if(idx==n){
            int i=0;
           while(k--){
               ans.push_back(arr[n-1-i]);
               i++;    
           }
        }
        else{
                    int i=idx-1;
        while(k>0 and i>=0 and idx<n){
            k--;
            int d1=abs(arr[i]-x);
            int d2=abs(arr[idx]-x);
            if(d1<=d2)
            {
               ans.push_back(arr[i]);
                i--;
            }   
            else{
                ans.push_back(arr[idx]);
                idx++;
            }
        }
        while( k>0 and i>=0){
            k--;
              ans.push_back(arr[i]);
                i--;    
        }
        while(k>0 and idx<n){
              ans.push_back(arr[idx]);
                idx++; 
            k--;
        }
            
        }

        sort(ans.begin(),ans.end());
        return ans;   
    }

int main(){
	init_code();
	vec arr;
	read(n);
	loop(i,n){
		read(var);
		arr.push_back(var);	
	}
	Read(k,x);
	vector<int> ans=findClosestElements(arr,k,x);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" "<<endl;
	}
	


	
}