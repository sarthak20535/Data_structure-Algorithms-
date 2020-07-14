#include <iostream>
#include<stdio.h>
using namespace std;


int dectobin(int p)
{
    int binarynum[32];
    int i=0;
    int count=0;
    while(p>0)
    {
        binarynum[i]=p%2;
        p=p/2;
        if(binarynum[i]==1)
        count++;
        i++;
        
    }
    return count;
}

int main()
{
//   cout << "Hello World" << endl; 
   int n,p;
   cin>>n;
 for (int i=0;i<n;i++)
 {
     cin>>p;
     cout<<dectobin(p)<<endl;
 }
  
   return 0;
}