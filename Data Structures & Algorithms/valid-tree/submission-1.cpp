class Solution {
public:
    void dfs(int node,vector<vector<int>>&adj,vector<bool>&visited){
        visited[node]=true;
        for(int ni:adj[node]){
            if(!visited[ni]){
                dfs(ni,adj,visited);
            }
        }
    }
    bool validTree(int n, vector<vector<int>>& edges) {
      if(edges.size()!=n-1)
      return false;
      vector<vector<int>>adj(n);
      for(auto edge:edges){
        int u=edge[0];
        int v=edge[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
              }
              vector<bool>visited(n,false);
              dfs(0,adj,visited);
              for(bool x:visited){
                if(x==false)
                return false;
              }
              return true;
    }
};
