#include <bits/stdc++.h>
#define int long long
using namespace std;


signed main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        if((a+b) % 3 !=0){
            cout<<"NO"<<endl;
            continue;
        }

        if( 2* min(a,b) < max(a,b)){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
}
