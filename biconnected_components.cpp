#include <bits/stdc++.h>
using namespace std;
int n,m,t=0;
vector<int> adj[1005];
bool vis[1005],ap[1005];
int disc[1005],low[1005],parent[1005]={-1};
stack<pair<int,int> > s;
int even=0,odd=0,cnt=0;

void dfs(int u)
{
vis[u]=true;
disc[u]=low[u]=t++;
for(int i=0;i<adj[u].size();i++)
{
int p=adj[u][i];
if(!vis[p])
{
parent[p]=u;
s.push(make_pair(u,p));
dfs(p);
low[u]=min(low[u],low[p]);
if(low[p]>=disc[u])
{
cnt=0;
while(s.top().first!=u && s.top().second!=p)
{
s.pop();
cnt++;
}
s.pop();
cnt++;
if(cnt==1) even++;
else
{
if(cnt%2==0) even++;
else odd++;
}
}
}
else if(p!=parent[u] && disc[p]<low[u])
{
low[u]=disc[p];
s.push(make_pair(u,p));
}
}
}

int main()
{
cin>>n>>m;
int x,y;
while(m--)
{
cin>>x>>y;
adj[x].push_back(y);
adj[y].push_back(x);
}
for(int i=0;i<n;i++)
{
if(!vis[i])
dfs(i);
}
cnt=0;
while(!s.empty())
{
cnt++;
s.pop();
}
if(cnt>0)
{
if(cnt==1) even++;
else
{
if(cnt%2==0) even++;
else odd++;
}
}
cout<<odd<<" "<<even<<endl;
}