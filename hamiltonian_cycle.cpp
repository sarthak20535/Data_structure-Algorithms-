/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stdio.h>
#include <bits/stdc++.h>

using namespace std;
#define N 12
 


bool isSafe(int v, bool graph[][N],  
            int path[], int pos)  
{  
    /* Check if this vertex is an adjacent  
    vertex of the previously added vertex. */
    if (graph [path[pos - 1]][ v ] == 0)  
        return false;  
  
    /* Check if the vertex has already been included.  
    This step can be optimized by creating 
    an array of size V */
    for (int i = 0; i < pos; i++)  
        if (path[i] == v)  
            return false;  
  
    return true;  
}  

bool hamCycleUtil(bool graph[][N],  
                  int path[], int pos,int n)  
                  
    {
        if(pos==n)
        {
            if (graph[path[pos - 1]][path[0]] == 1)  
            return true;  
           else
            return false;  
        }
        
        
        for (int v=0;v<n;v++)
        {
            if (isSafe(v,graph,path,pos))  
        {  
            path[pos] = v;  
  
            /* recur to construct rest of the path */
            if (hamCycleUtil (graph, path, pos + 1,n) == true)  
                return true;  
  
            /* If adding vertex v doesn't lead to a solution,  
            then remove it */
            path[pos] = -1;  
        }  
      
        }
        return false;
    }



bool ham_cycle(bool graph[][N],int n)
{
    int path[n];
    path[0]=0;
    for(int k=0;k<n;k++)
    {
        path[k]=-1;
        
    }
    if (hamCycleUtil(graph, path, 1,n) == false ) 
    return false;
    return true;
    
}

int main()
{
   
   int n,m,p,q;
   cin>>n>>m;
   bool graph[N][N];

   
   for (int i=0;i<m;i++)
   {
       cin>>p>>q;
       graph[p][q]=true;
   }
  bool t= ham_cycle(graph, n);
  if (t)
  cout<<"YES";
  else
  cout<<"NO";
   return 0;


}