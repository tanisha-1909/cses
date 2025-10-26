#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;

    map<char,int>m;

    for(char c:s){
        m[c]++;
    }

    int n=s.size();
    bool flag=false;
    bool nosol=false;

    int l=0;

    for(auto &it:m){

        while(it.second>=2){

            s[l]=it.first;
            s[n-l-1]=it.first;
            it.second-=2;
            l++;
        }
        
        if(it.second==1  ){

            if(flag==false){
                s[n/2]=it.first;
                flag=true;
            }
            else{
                nosol=true;
                break;
            }
            
        }
    }

    if(nosol==true){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        cout<<s<<endl;
    }
}