#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
vector<int> adj[11];
bool visited[11];
stack<int> s;
void dfs_top(int x)
{
visited[x]=true;
for(int i=0;i<adj[x].size();i++)
{
if(visited[adj[x][i]]==false)
dfs_top(adj[x][i]);
}
s.push(x);
}
int main(){
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++){
int x,y;
cin>>x>>y;
adj[x].push_back(y);
}
for(int i=1;i<=n;i++){
visited[i]=false;
}
for(int i=1;i<=n;i++){
sort(adj[i].begin(),adj[i].end(),greater<int>());
}
for(int i=n;i>0;i--){
if(visited[i]==false)
dfs_top(i);
}
while(!s.empty()){
cout<<s.top()<<" ";
s.pop();
}
return 0;
}