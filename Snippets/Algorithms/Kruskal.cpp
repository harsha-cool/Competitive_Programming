void init(vi& id)
{
  int n = id.size();
  for(int i=0;i<n;i++) id[i] = i;
}

int root(int x)
{
  while(id[x]!=x)
  {
    id[x] = id[id[x]];
    x = id[x];
  }
  return x;
}

void union(int x,int y)
{
  int p = root(x);
  int q = root(y);
  id[p] = id[q];
}

ll kruskal(pair<ll,pi> P)        // weight, x, y
{
  ll cost = 0, mincost = 0;
  sort(all(P));
  for(auto ele:P)
  {
    cost = ele.f;
    int x = ele.s.f;
    int y = ele.s.s;
    if(root(x)!=root(y))
    {
      mincost+=cost;
      union(x,y);
    }
  }
  return mincost;
}
