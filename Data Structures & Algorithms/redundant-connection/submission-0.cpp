class Solution {
public:
bool isConnected(int node,int target,vector<vector<int>> &adj,vector<bool> &vis){
    if(node==target) return true;
    vis[node]=true;
    for(int ngb:adj[node]){
        if(!vis[ngb] && isConnected(ngb,target,adj,vis))  return true ;
    }
    return false;
}
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size(); // number of vertices ;
        vector<bool> vis(n+1,false);
        vector<vector<int>> adj(n+1);
        vector<int> redundant ;
        for(auto &edge:edges){
            int u=edge[0];
            int v=edge[1];
            fill(vis.begin(), vis.end(), false);
            if(isConnected(u,v,adj,vis)){
                redundant=edge;
            }
            else{
                adj[u].push_back(v) ;
                adj[v].push_back(u) ;
            }
            
        }
        
        return redundant ;

    }
};