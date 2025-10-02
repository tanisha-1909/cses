#include<bits/stdc++.h>
#define int long long
using namespace std;
 
signed main(){
	long long n;
	cin>>n;
 
	int ans=0;
	for(int bit=0;bit<60;bit++){
 
		int fullcycle= (n+1)/ (1LL<<(bit+1));
 
		int ones = fullcycle*(1LL<<bit);
 
		int partial= (n+1) % (1LL<<(bit+1));
 
		ones+= max(0LL, partial- (1LL<<bit));
 
		ans+=ones;
	}
	cout<<ans<<endl;
 
}