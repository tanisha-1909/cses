
#include<bits/stdc++.h>
#define int long long
using namespace std;
 
signed main(){
	int n;
	cin>>n;
 
	while(n!=1){
		cout<<n<<" ";
 
		if((n %2)==0){
			//even
			n=n/2;
		}
		else{
			n=3*n+1; 
		}
	}
 
	cout<<1<<endl;
