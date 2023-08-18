class Solution {
public:
    // Bipartite Graph --> Graph can be colored exactly by 2 colors two divide into two set
    bool dfs(int node , int col ,vector<int>& color , unordered_map<int ,vector<int>>& adj) {
        color[node] = col;
        
        for(auto v : adj[node]) {
            if(color[v] == -1){
                if(dfs(v , !col , color , adj) == false) return false;
            }
            else if(color[v] == col) {
                return false;
            }
        }
        
        return true;

    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n,-1);
        unordered_map<int ,vector<int>> adj;
        
        for(int i = 0 ; i<n ; i++) {
            for(auto j : graph[i]) {
                adj[i].push_back(j);
            }
        }
        
        for(int i = 0 ; i<n ; i++) {
            if(color[i] == -1) {
                if(dfs(i , 0 , color , adj) == false) return false; ;
            }
        }
        
        return true;
    }
};