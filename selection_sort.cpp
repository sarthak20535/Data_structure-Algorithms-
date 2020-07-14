#include <iostream>

using namespace std;
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
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    cout<<"hello";
    int a[]={2,4,3,8,3};
    int x=sizeof(a)/sizeof(a[0]);
    sort_selection(a,x);

    return 0;
}
