#include <iostream>
using namespace std;
void sort_selection(int a[],int n )
{
int temp;
int j,key;
int pos[n];
for (int i=0;i<n;i++)
    {
        pos[i]=a[i];
    }
    for (int i=1;i<n;i++)
    {
        
         key = a[i];
         j=i-1;
        while(j>=0  &&   a[j]>key )
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for (int i=0;i<n;i++)
    {
        for ( j=0;j<n;j++)
        {
            if(pos[i]==a[j])
            
            cout<<j+1<<" ";
        
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
   // int x;
    //cin>>x;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort_selection(a,n);
    return 0;
}

