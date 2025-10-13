#include <bits/stdc++.h>
using namespace std;

int dfs(int node,int parent,vector<int>adj[], vector<int>&down){

    int maxi=-1;

    for(auto it:adj[node]){
        if(it==parent) continue;
        maxi=max(maxi, dfs(it,node,adj,down));
    }

    return down[node]= 1+ maxi;;
}

void dfsup(int node,int parent, vector<int>adj[], vector<int>&down, vector<int>&up){


    int mx1=-1;
    int mx2=-1;

    for(auto it:adj[node]){
        if(it==parent) continue;

        if(down[it] >mx1){
            mx2=mx1;
            mx1=down[it];
        }
        else if(down[it] > mx2){
            mx2=down[it];
        }
    }

    for(auto it:adj[node]){
        if(it==parent) continue;

        int use= (down[it]== mx1 ? mx2: mx1);

        if(use==-1){
            up[it]= 1+up[node];
        }
        else{
            up[it]= max(1+ up[node] , 2+use);
        }

        dfsup(it,node,adj,down,up);
    }
}
int main() {
    
    int n;
    cin>>n;

    vector<int>adj[n+1];

    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int>down(n+1,0);

    int h=dfs(1,-1,adj,down);

    vector<int>up(n+1,0);

    dfsup(1,-1,adj,down,up);

    for(int i=1;i<=n;i++){
        int ans= max(up[i], down[i]);

        cout<<ans<<" ";
    }cout<<endl;
    return 0;
}
