#include <iostream>
#define N 15
using namespace std;


void  printallpathsutil(int matrix[][N],int i,int j,int path[],int m,int n,int pi)

{
 
 if(i==m-1)
 {
     for(int k=j;k<n;k++)
     path[pi+k-j]=matrix[i][k];
     for(int l=0;l<pi+n-j;l++)
     cout<<path[l]<<" ";
     cout<<endl;
     return ;    
     
 }
 
 
 if(j==n-1)
 {
     for(int k=i;k<m;k++)
     path[pi+k-i]=matrix[k][j];
     for(int l=0;l<pi+m-i;l++)
     cout<<path[l]<<" ";
     cout<<endl;
     return  ;   
     
 }
 path[pi]=matrix[i][j];
   
   
   printallpathsutil(matrix,i+1,j,path,m,n,pi+1);

     printallpathsutil(matrix,i,j+1,path,m,n,pi+1);
}

void printallpaths(int matrix[][N],int m,int n)
{
    int path[N+N];
    printallpathsutil( matrix,0,0,path, m, n,0);
     
}
int main()
{
   cout << "Hello World" << endl; 
   int m,n;
   cin>>m>>n;
   int matrix[N][N];
   
 for(int i=0;i<m;i++)
 {
     for(int j=0;j<n;j++)
     {
         cin>>matrix[i][j];
     }
 }
   printallpaths(matrix,m,n);
   
   return 0;
}