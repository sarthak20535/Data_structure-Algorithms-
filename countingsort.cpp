#include <iostream>

using namespace std;

int main()
{
   cout << "Hello World" << endl; 
    //counting sort
   int n;
   cin>>n;
   
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   
   int max=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]>max)
       {
           max=arr[i];
       }
   }
//   cout<<max<<endl;
int aux[max];
   
     for(int i=0 ; i<=max; i++) {
        aux[i] = 0;
    }
   
   for(int i=0;i<n;i++)
   {
       aux[arr[i]]++;
   }
   
   
    
//   for(int i=0;i<max;i++)
//   {
//       cout<<aux[i]<<endl;
//   }


int sorted[n]={0};
int j=0;
for(int i=0;i<=max;i++)

{
    int temp=aux[i];
    while(temp--)
    {
        sorted[j]=i;
        j++;
    }

}    
  for(int i=0;i<n;i++)
  {
      cout<<sorted[i]<<" ";
  }

   
   return 0;
}