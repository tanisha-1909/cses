#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
   	
   int n;
   cin>>n;

   vector<int>st1,st2;


   int sum= (n*(n+1))/2;

   if(sum %2!=0){
   		cout<<"NO"<<endl;
   		return 0;
   }

   cout<<"YES"<<endl;
  
   int target=sum/2;

   for(int i=n;i>=1;i--){

   		if(i<=target){
   			st1.push_back(i);
   			target-=i;
   		}

   		else{
   			st2.push_back(i);
   		}

   }

   cout<<st1.size()<<endl;
   for(auto i:st1){
   		cout<<i<<" ";
   }cout<<endl;

   cout<<st2.size()<<endl;
   for(auto i:st2){
   		cout<<i<<" ";
   }cout<<endl;

    return 0;
}
