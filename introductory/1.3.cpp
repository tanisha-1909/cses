#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main() {
   	
   	string s;
   	cin>>s;
 
   	int m=s.length();
   	
 
   	int len=1,maxi=1;
 
   	for(int i=1;i<m;i++){
   		if(s[i]==s[i-1]){
   			len+=1;
   			maxi=max(maxi,len);
   		}
   		else{
   			
   			len=1;
   		}
   	}
   	cout<<maxi<<endl;
 
    return 0;
}
