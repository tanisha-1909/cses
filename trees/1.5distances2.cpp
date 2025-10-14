class Solution {
public:
int N=0;
    void dfs(int node,int parent, vector<vector<int>>&adj, vector<int>&child,vector<int>&ans){
        
        for(auto it:adj[node]){
            if(it==parent) continue;
            dfs(it,node,adj,child,ans);

            child[node]+=child[it];
            ans[node]+=ans[it]+ child[it];
        }
        child[node]+=1;
        return;
    }
    void calc(int node, int parent, vector<vector<int>>&adj, vector<int>&child,vector<int>&ans){
        for(auto it:adj[node]){
            if(it==parent) continue;

            ans[it]= ans[node]+ (N-child[it]) + child[it];
            calc(it,node,adj,child,ans);
        }
    }
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);

        for(auto it:edges){
            int u=it[0];
            int v=it[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        N=n;
        vector<int>child(n);
         vector<int>ans(n);
        dfs(0,-1,adj,child,ans);       
        
        calc(0,-1,adj,child,ans);

        return ans;
    }
};