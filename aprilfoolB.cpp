
#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[100];
   int count,k = 0;
   for(int i=2;i<n-1;i++)
   {
       if(n%i==0)
       {
           count++;
           arr[k]=i;
           k++;
         
           
       }
   }
   cout<<arr[0]<<arr[1];
   
   return 0;
}