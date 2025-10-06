#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	
	int n;
	cin>>n;

	int i=5;
	int ans=0;

	while(n>=i){
		ans+= n/i;

		i*=5;
	}

	cout<<ans<<endl;
}