#include <iostream>
#include <bits/stdc++.h>
#include<utility>
#include<stdio.h>
#include<set>
using namespace std;

set<int>T;
int t,n;

int main()
{
cin>>t;static int k=1;

while(t--)
{
    int trace=0;
      int count=0;
    cin>>n;
    int arr[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(i==j)
        trace+=arr[i][j];
    }
}

    for(int i=0;i<n;i++)
    {
        int temp[n];
        for(int j=0;j<n;j++)
        {
        temp[j]=arr[i][j]; 
         T.insert(temp[j]);
       }
        
         if (n!=T.size())
         {
         count++;
         
         }
         T.clear();
        
    }
    int count1=0;
    for(int i=0;i<n;i++)
    {
        int temp1[n];
        for(int j=0;j<n;j++)
        {
        temp1[j]=arr[j][i]; 
         T.insert(temp1[j]);
       }
        
         if (n!=T.size())
         {
         count1++;
         
         }
         T.clear();
        
    }

cout<<"Case #"<<k<<": "<<trace<<" "<<count<<" "<<count1<<endl;
k++;
}
   
   return 0;
}