class Solution {
public:
void dfs(int node,vector<vector<int>> &adj,vector<bool> &vis){
    vis[node]=true;
    for(int ngb:adj[node]){
        if(!vis[ngb]) dfs(ngb,adj,vis);
    }
}
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto &edge:edges){
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> vis(n,false);
        int ans=0;
        for(int i=0;i<n;i++){
            if(!vis[i]) {
                dfs(i,adj,vis);
                ans++ ;
            }
        }

        return ans;
    }
};
