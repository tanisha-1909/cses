#include<bits/stdc++.h>
#define int long long
using namespace std;
 
signed main(){
	int n;
	cin>>n;
 
	int totalsum=(n*(n+1))/2;
 
	int sum=0;
 
	for(int i=1;i<n;i++){
		int x;
		cin>>x;
		sum+=x;
	}
 
	cout<<totalsum-sum<<endl;
}