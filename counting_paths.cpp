#include <iostream>

using namespace std;

int  paths(int m,int n)

{
    int count[m][n];
    
    for(int i=0;i<m;i++)
    {
        count[i][0]=1;
        // cout<<i<<"-0 ";
    }
    
    
    for(int j=0;j<n;j++)
    {
        count[0][j]=1;
        // cout<<"0-"<<j<<" ";
    }
    
    for(int i=1;i<m;i++)
    {
        for (int j=1;j<n;j++)
        {
            count[i][j]=count[i-1][j]+count[i][j-1];
            
            
        }
        cout<<"\n";
    }
    return count[m-1][n-1];
}

int main()
{
   cout << "Hello World" << endl; 
   int m,n;
   cin>>m>>n;
//   int matrix[m][n];
   
   int x=paths(m,n);
   cout<<x;
   
   
   return 0;
}