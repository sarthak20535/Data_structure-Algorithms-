/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//longest  common subsequence length
#include <iostream>

using namespace std;

int LCS(string s1,string s2,int m,int n)
{
    int count=0;
    if(m==0 || n==0)
    return 0;
    if(s1[m-1]==s2[n-1])
    {
        return 1+LCS(s1,s2,m-1,n-1);
    }
   else
    {
        return max(LCS(s1,s2,m,n-1),LCS(s1,s2,m-1,n));
    }
}
int max(int a ,int b)
{
    return (a>b)?a:b;
}


int main()
{
   string s1,s2;
   int m,n;
   cin>>s1>>s2;
   m=s1.length();
   n=s2.length();
   cout<<LCS(s1,s2,m,n);

    return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//longest  common subsequence length
#include <iostream>

using namespace std;

int LCS(string s1,string s2,int m,int n)
{
    int L[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 ||j==0)
            L[i][j]=0;
            else if(s1[i-1]==s2[j-1])
            L[i][j] = L[i - 1][j - 1] + 1;  
            else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);  
        
        }
        
    }
    
    
    return L[m][n];
   
}



int main()
{
   string s1,s2;
   int m,n,t;
   cin>>t;
   while(t--)
   {
   cin>>m>>n;
   cin>>s1>>s2;
    cout<<LCS(s1,s2,m,n)<<endl;
   }
  

    return 0;
}
