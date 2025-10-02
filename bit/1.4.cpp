#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
 
 
	vector<int>v(n);
	set<int>s;
	s.insert(0);
 
 
	for(int i=0;i<n;i++){
		cin>>v[i];
		s.insert(v[i]);
	}
 
	vector<int>basis;
 
	for(int num:v){
		for(int i:basis){
			num=min(num, num ^i);
		}
 
		if(num) basis.push_back(num);
	}
 
	int k=basis.size();
	cout<<(1LL<<k)<<endl;
}
