#include <iostream>
#include <bits/stdc++.h>
#include <limits.h> 
#include <stdio.h> 
#define V 10005
using namespace std;

int mindist(int dist[],bool visited[],int v)
{
    int min_index,min=INT_MAX;
    for(int i=0;i<v;i++)
    {
        if(dist[i]<=INT_MAX && visited[i]==false)
        {min_index=i;min=dist[i];}
    }
    return min_index;
}

void printsolution (int dist[],int v)
{
    for(int i=0;i<v;i++)

        cout<<dist[i]<<" ";
    
}

void dijkstra(int graph[][V],int src,int v)
{
    int dist[V];
    bool visited[V];
    for(int i=0;i<v;i++)
    {
        dist[i]=INT_MAX,visited[i]=false;
        
    }
    dist[src]=0;
    for(int i=0;i<v-1;i++)
    {
        int u=mindist(dist,visited,v);
        visited[u]=true;
        for(int j=0;j<v;j++)
        
            if(!visited[j] && graph[u][j] && dist[u] !=INT_MAX 
                && dist[u] + graph[u][j] < dist[j]) 
                dist[j] = dist[u] + graph[u][j]; 
        
        
        
    }
    printsolution(dist,v);
    
}
int main()
{
    int v,e,p,q,w;
    cin>>v>>e;
    int graph[V][V];
    
  
    // graph = new int *[v];
    // for(int i=0;i<v;i++){
    //     graph[i] = new int[v];
    // }
    for(int i=0;i<e;i++)
    {
        cin>>p>>q>>w;
        graph[p][q]=w;
        
        
    }
    dijkstra(graph,0,v);
    
    
   cout << "Hello World" << endl; 
   
   return 0;
}