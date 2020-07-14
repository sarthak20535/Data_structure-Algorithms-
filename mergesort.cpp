#include<iostream>
using  namespace std;

 void  merge(int arr[],int l,int m,int r)
{
    int n1,n2,i,j,k;
    n1=m-l+1;
    n2=r-m;
    int L[n1], R[n2]; 
    for ( i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (  j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j];
      i = 0;
      j=0;
      k = l;
   
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
            
    
        } 
        k++; 
        
    }
    
     while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
     while (j< n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
     
}


void merge_sort(int arr[],int l,int r)
{
   int x=0;
   if(l<r)
   {
   int m;
    m=(l+r)/2;
    merge_sort(arr,l,m);
    merge_sort(arr,m+1,r);
    merge(arr,l,m,r);
    
   }

}
void printarray(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout <<arr[i]<<" ";
    }
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
     
    merge_sort(arr,0,n-1);
    printarray(arr,n);
    
}
