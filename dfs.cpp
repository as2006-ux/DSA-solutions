void dfs(int node, vector<int> adj[], vector<bool>& vis) {
    vis[node] = true;
    cout << node << " ";
    for(int x : adj[node])
        if(!vis[x])
            dfs(x, adj, vis);
}
