#include <iostream>

using namespace std;

void heapify(int arr[],int n,int i)
{
    int l,r;
    int largest=i;
    l=2*i+1;
    r=2*i+2;
    if (l<n && arr[l]>arr[largest])
    largest=l;
    if (r<n && arr[r]>arr[largest])
    largest=r;
    if (largest!=i)
    {
    swap (arr[largest],arr[i]);
    heapify(arr,n,largest);
    }
}
void heap_sort(int arr[], int n)
{
    
    for(int i=n/2-1;i>=0;i--)
    heapify(arr,n,i);
    
    for (int i=n-1;i>=0;i--)
    {
        swap (arr[0],arr[i]);
        heapify(arr,i,0);
    }
}

void swap(int &x,int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
}

int main()
{
    int n;
    int arr[n];
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    heap_sort(arr,n);
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";;
    }
}