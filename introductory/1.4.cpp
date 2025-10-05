#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
    
    int n;
    cin>>n;
 
    int moves=0;
    int prev=0;
 
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
 
        if(i>0 && x<prev){
            moves+=(prev-x);
        }
        else prev=x;
    }
 
    cout<<moves<<endl;
    return 0;
}