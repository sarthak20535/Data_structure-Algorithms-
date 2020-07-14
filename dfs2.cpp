#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

#include<set>
int dfs(int p,vector<int>adj[],bool visited[])
{
   visited[p]=true;
nfor (auto k=adj[p].begin();k!=adj[p].end();k++)
    {
    if(!visited[*k])
        {
        dfs(*k,adj,visited);
        }
    }
    
}


int main()
{
int a,b;
int n,m;
cin>>n>>m;
vector<int>adj[n];
bool visited[n];

// m=n*(n-1)/2;

for(int i=0;i<m;i++)
{
    cin>>a>>b;
    adj[a].push_back(b);
    
}
for(int i=0;i<n;i++)
{
   visited[i]=false;
}

for(int i=0;i<n;i++)
{
    if(!visited[i])
    {
    dfs(i,adj,visited);
   
    }
}
   
   return 0;
}