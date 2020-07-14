#include <iostream>

using namespace std;
#define INT_MAX 99999  
#define V 4 
int graph[V][V];
void printSolution(int dist[][V])  
{   for (int i = 0; i < V; i++)  
    {  
        for (int j = 0; j < V; j++)  
        {  
            if (dist[i][j] == INT_MAX)  
                cout<<"INT_MAX"<<"     ";  
            else
                cout<<dist[i][j]<<"     ";  
        }  
        cout<<endl;  
    }  
}  


void floydWarshall (int graph[][V])  
{  
     int dist[V][V], i, j, k;  
  
  for (i = 0; i < V; i++)  
        for (j = 0; j < V; j++)  
            dist[i][j] = graph[i][j];  
  
  for (k = 0; k < V; k++)  
    {  
        for (i = 0; i < V; i++)  
        {  
            
             for (j = 0; j < V; j++)  
            {  
                if (dist[i][k] + dist[k][j] < dist[i][j])  
                    dist[i][j] = dist[i][k] + dist[k][j];  
            }  
        }  
    }  
    printSolution(dist);  
}  

int main()
{
    //int v,e,w,p,q;
    
    //cin>>v>>e;
    // graph[V][V]={0};
    // int **graph;
    // graph = new int *[V];
    // for(int i=0;i<V;i++){
    //     graph[i] = new int[V];
    
    //  for(int i=0;i<e;i++)
    // {
    //     cin>>p>>q>>w;
    //     graph[p][q]=w;
        
        
    // }
    int graph[V][V]=
    { 
		{	   0, INT_MAX,	  -2, INT_MAX },
		{	   4,	   0,	   3, INT_MAX },
		{ INT_MAX, INT_MAX,	   0,	   2 },
		{ INT_MAX,	  -1, INT_MAX,	   0 } 
	};
   cout << "Hello World" << endl; 
   floydWarshall(graph);  
   
   return 0;
}