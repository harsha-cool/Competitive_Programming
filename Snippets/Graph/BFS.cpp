void bfs(int node,int n, V<vi> &adj)
{
    queue<int> q;
    vb used(n);
    vi d(n),p(n);
    q.push(node);
    used[node] = 1;
    p[node]=-1;
    while(!q.empty())
    {
        int v = q.front(); q.pop();
        for(auto u:adj[v])
        {
            if(!used[u])
            {
                used[u] = true;
                q.push(u);
                d[u] = d[v]+1;
                p[u] = v;
            }
        }
    }
}
