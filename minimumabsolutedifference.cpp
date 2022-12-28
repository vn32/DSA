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
int main(){
	init_code();
	vec a;
	vec b;
	read(n);
	loop(i,n){
		read(var);
		a.push_back(var);	
	}
	read(m);
	loop(i,m){
		read(var);
		b.push_back(var);	
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	pair<int,int> pa;
	int minimum=INT_MAX;
	int i=0,j=0;
	while(i<a.size() and j<b.size()){
		int diff=abs(a[i]-b[j]);
		if(diff<minimum){
			minimum=diff;
			pa.first=a[i];
			pa.second=b[j];
		}
		if(a[i]<b[j])
			i++;
		else
			j++;
	}
	cout<<pa.first<<" "<<pa.second<<" "<<minimum<<endl;


	
}