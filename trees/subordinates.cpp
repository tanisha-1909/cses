#include<bits/stdc++.h>
#define int long long
using namespace std;

int f(int node, vector<int>adj[], vector<int>&dist){

	if(adj[node].size()==0) return 0;

	for(auto i:adj[node]){

		dist[node]+= 1+f(i,adj,dist);
	}

	return dist[node];
}
signed main(){
	
	int n;
	cin>>n;

	vector<int>adj[n+1];

	for(int i=2;i<=n;i++){
		int par;
		cin>>par;

		adj[par].push_back(i);
	}

	vector<int>dist(n+1,0);

	int m=f(1,adj,dist);

	for(int i=1;i<=n;i++){
		cout<<dist[i]<<" ";
	}cout<<endl;
}