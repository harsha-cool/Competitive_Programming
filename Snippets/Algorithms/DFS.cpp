void dfs(int start,vb& visited,vi adj[])
{
  visited[start] = true;
  for(auto x:adj[start])
  {
    if(!visited[x]) dfs(x,visited,adj);
  }
}
