#include <iostream>
#include<vector>
using namespace std;
vector<int>adj[100005];
bool visited[100005];
int ans=0;
void initialize(int nodes) {
    
        for(int i = 0;i <nodes ;++i)
         visited[i] = false;
}


void dfs(int s)
{
    visited[s]=true;
    ans++;
    for(int i=0;i<adj[s].size();++i)    {
         if(visited[adj[s][i]] == false)
             dfs(adj[s][i]);
        }
}


int main() {
        int nodes, edges, x, y;
        cin>>nodes>>edges;
        for (int i=0;i<edges;i++)
        {
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
            initialize(nodes);
            int index;
            cin>>index;
        
            dfs(index);
            cout<<nodes-ans;
            return 0;
            
            
}