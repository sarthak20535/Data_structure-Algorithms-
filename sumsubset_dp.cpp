/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;     
bool  subset(int arr[],int n,int sum)
{
    if(sum==0)
    return true;
    if(n==0 && sum!=0)
    return false;
    
    if(arr[n]>sum)
    return subset(arr,n-1,sum);
    
    return subset(arr,n-1,sum)||subset(arr,n-1,sum-arr[n-1]);
}

int main()
{
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   bool t=subset(arr,n,sum);
   if(t==true)
   cout<<"possible";
   else
   cout<<"not possible";

    return 0;
}
