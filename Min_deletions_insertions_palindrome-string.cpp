//this is basically the program of longest common subsequence between 
// the string and its reverse to find the minimum number of deletions 
// to make it a palindrome 

// also number of deletions are always equal to number of insertions

// reference - https://www.youtube.com/watch?v=AEcRW4ylm_c



#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int LCS(string s1,string s2,int n)
{
    int m=n;
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
   string s1;
   int m,n,t;
   cin>>t;
   while(t--)
   {

   cin>>s1;
   n=s1.length();
   string s2=s1;
   reverse(s1.begin(),s1.end());
    cout<<n-LCS(s1,s2,n)<<endl;
   }
  

    return 0;
}