#include<iostream>
using  namespace std;

void swap(int* x,int* y)
{
    int t=*x;
    *x=*y;
    *y=t;
}
int position(int arr[],int start,int end)
{
    int pivot =arr[end];
    int i=start-1;

    for(int j=start ;j<=end-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
        swap(&arr[j],&arr[i]);
        
        }   
        
    }
    swap(&arr[end],&arr[i+1]);
    
    return (i+1);
}




void quicksort(int arr[],int start,int end)
{
    if(start<end)
    {
    int pivot_pos=position(arr,start,end);
    quicksort(arr,start,pivot_pos-1);
    quicksort(arr,pivot_pos+1,end);
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
    quicksort(arr,0,n-1);
    printarray(arr,n);
    
}