/* Dynamic Programming C++ implementation  
   of LIS problem */
#include<bits/stdc++.h>  
using namespace std; 
    
/* lis() returns the length of the longest   
  increasing subsequence in arr[] of size n */
int lis( int arr[], int n )  
{  
    int lis[n]; 
   
    lis[0] = 1;    
  
    /* Compute optimized LIS values in  
       bottom up manner */
    for (int i = 1; i < n; i++ )  
    { 
        lis[i] = 1; 
        for (int j = 0; j < i; j++ )   
            if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)  
                lis[i] = lis[j] + 1;  
    } 
  
    // Return maximum value in lis[] 
    return *max_element(lis, lis+n); 
}  
    
/* Driver program to test above function */
int main()  
{  
   int t,n,i;
   cin>>t;
   while(t--)
   {
       cin>>n;
       int arr[n];
       for(i=0;i<n;i++)
       cin>>arr[i];
       cout<<lis(arr,n)<<endl;
       
   }
  
    return 0;  
}