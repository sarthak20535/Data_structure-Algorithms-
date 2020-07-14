#include <iostream>
using namespace std;
void sort_selection(int a[],int n,int x )
{
    int min_indx;
    int temp;
    for (int i=0;i<x;i++)
    {
        min_indx=i;
        for (int j=i+1;j<n;j++)
        {
            if (a[min_indx]>a[j])
            {
                min_indx=j;
            }
        }
        temp=a[i];
        a[i]=a[min_indx];
        a[min_indx]=temp;
    }
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int x;
    cin>>x;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort_selection(a,n,x);
    return 0;
}

