class Solution {
public:
    string foreignDictionary(vector<string>& words) {
        int n=words.size();
        unordered_map<char,unordered_set<char>> graph;
        unordered_map<char, int> indegree;

        for (string &word : words) {
            for (char c : word) {
                graph[c];        // create empty adjacency list
                indegree[c] = 0; // initialize indegree
            }
        }

        for (int i=1;i<n;i++) {
            string w1=words[i-1];
            string w2=words[i];
            int j=0;
            while (j < min(w1.size(), w2.size()) && w1[j] == w2[j]) j++;
            if (j == min(w1.size(), w2.size()) && w1.size() > w2.size()) return "";
             if(j<min(w1.size(),w2.size())){
               if (graph[w1[j]].insert(w2[j]).second) {
               indegree[w2[j]]++;
                }
             }

        }
        queue<char> q;
         for(auto &[c,d]:indegree){
            if(d==0){
                q.push(c) ;
            }
         }
         string topo="" ;
         while(!q.empty()){
            char curr=q.front();
            q.pop();
            topo+=curr;
            for(char ngb:graph[curr]){
                indegree[ngb]-=1 ;
                if(indegree[ngb]==0) q.push(ngb);
            }
         }
       if (topo.size() != indegree.size())  return "";
       return topo;
    }
};
