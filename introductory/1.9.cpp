#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n;
    cin>>n;

    for(int k=1;k<=n;k++){
        int total= (k*k*(k*k -1 ))/2;
        int attack=4*(k-1)*(k-2);
        cout<<total-attack<<endl;
    }
}

