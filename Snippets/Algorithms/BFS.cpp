void bfs(int start,vb& visited,vi adj[])
{
  queue<int> q;
  q.push(start);
  visited[start] = true;
  while(!q.empty())
  {
    int ele = q.front();
    q.pop();
    for(auto x:adj[ele])
    {
      if(!visited[x]) q.push(x);
    }
  }
}

void bfs01(int start,vi& distance, vpi adj[])
{
  deque<int> q;
  q.push(start);
  distance[start] = 0;
  while(!q.empty())
  {
    auto ele = q.front();
    q.pop_front();
    for(auto x:adj[ele])
    {
      ckmin(distance[x.f],distance[v]+x.s);
      if(x.s==0) q.push_front(x.f);
      else q.push_back(x.f);
    }
  }
}
