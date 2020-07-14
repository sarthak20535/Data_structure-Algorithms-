#include <iostream>
using namespace std;
#define M 1000000007
int main()
{
int t,i;
cin >> t;
long long int a[100001];
a[0]=1;
long long int ans=1;
a[0]=1;
for(i=1;i<100001;i++)
{
a[i]=1;
a[i]= ((a[i-1]%M)*(i%M))%M;
}
while(t--)
{
int n;
cin >> n;
cout << a[n]%M << "\n";
}
return 0;
}