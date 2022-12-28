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
int thirdMax(vector<int>& nums) {
        int fm=INT_MIN,n=nums.size();
        int sm=INT_MIN,tm=INT_MIN;
        if(n==1){
            return nums[0];
            
        }else if(n==2){
            if(nums[0]>nums[1])
                return nums[1];
            else
                return nums[0];
            
        }else{
            for(int i=0;i<nums.size();i++){
                if(nums[i]>fm){
                	tm=sm;
                	sm=fm;
                    fm=nums[i];
                }
                else if(nums[i]>sm){
                	tm=sm;
                    sm=nums[i];
                }
                else if(nums[i]>tm)
                    tm=nums[i];
            }
            
        }
        cout<<fm<<" "<<sm<<" "<<tm<<endl;
        return tm;
        
    }
int main(){
	init_code();
	vec nums;
	read(n);
	loop(i,n){
		read(var);
		nums.push_back(var);	
	}
	cout<<thirdMax(nums)<<endl;


	
}