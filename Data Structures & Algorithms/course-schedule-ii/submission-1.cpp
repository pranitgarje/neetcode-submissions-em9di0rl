class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int v=numCourses;
            vector<vector<int>> adj(v);
            vector<int> indegree(v,0);
            for(auto &edge:prerequisites){
                int u=edge[1];
                int v=edge[0];
                adj[u].push_back(v);
                indegree[v]++ ;
            }
            queue<int> q;
            for(int i=0;i<v;i++){
                if(indegree[i]==0){
                    q.push(i);
                }
            }
            vector<int> topo;
            while(!q.empty()){
                int curr=q.front();
                q.pop();
                topo.push_back(curr);
                for(int ngb:adj[curr]){
                    indegree[ngb]-- ;
                    if(indegree[ngb]==0) q.push(ngb);
                }
            }
            if(topo.size()==v) return topo;
            else return {} ;
    }
};
