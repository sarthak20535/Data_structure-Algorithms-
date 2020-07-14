#include <iostream>
using namespace std;
int search_binary(int arr[],int l,int h,int x)
{
    
   
   while (l<=h)
   {
       int mid= (l+h)/2;
       if (x<arr[mid])
       h=mid-1;
       else if (x>arr[mid])
       l=mid+1;
       else
       return mid;
       
   }
   return -1;
    
}
void sort_selection(int a[],int n )
{
    int temp;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
}
int main()
{
  int n,key;
  cin>>n;
  int arr[n];
  int y;
  int l=0;
  
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
      
  }
  cin>>y;
  sort_selection(arr,n);
  for(int i=0;i<y;i++)
  {
  cin>>key;
  cout<<(search_binary(arr,l,n,key))+1<<endl;
  }
  return 0;
}