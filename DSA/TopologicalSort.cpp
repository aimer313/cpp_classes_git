#include<bits/stdc++.h>
using namespace std;

int main(){

	/*public:
	//Function to return list containing vertices in Topological order.
	void dfs(int node , int vis[] , stack<int>&st , vector<int> adj[]) {
	    vis[node] = 1;
	    
	    for(auto v : adj[node]) {
	        if(!vis[v]) dfs(v , vis , st , adj);
	    }
	    st.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    int vis[V] = {0};
	    stack<int> st;
	    
	    for(int i = 0 ; i<V ; i++) {
	        if(!vis[i]) {
	            dfs(i,vis,st,adj);
	        }
	    }
	    
	    vector<int> ans;
	    
	    while(!st.empty()) {
	        ans.push_back(st.top());
	        st.pop();
	    }
	    
	    return ans;
        
        
        public:
	// Kahn Algo
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    int indegree[V] = {0};
	    
	    for(int i = 0 ; i<V ; i++) {
	        for(auto v : adj[i]) {
	            indegree[v]++;
	        }
	    }
	    
	    queue<int> q;
	    for(int i = 0 ; i<V ; i++) {
	        if(indegree[i] == 0) {
	            q.push(i);
	        }
	    }
	    vector<int> topo;
	    while(!q.empty()) {
	        int node = q.front();
	        
	        q.pop();
	        topo.push_back(node);
	        // node in topo sort
	        // so remove it in degree
	        for(auto v : adj[node]) {
	            indegree[v]--;
	            if(indegree[v] == 0) q.push(v);
	        }
	    }
	    
	    return topo;
        
        
        
        
        
        
        
        
        
        
        
        */



    return 0;
}