#include <bits/stdc++.h>
using namespace std;


#define int         long long
#define double      long double
#define pb          push_back
#define pf          push_front
#define pii         pair<int,int>
#define vi          vector<int>
#define vii         vector<pii>
#define fo(i,l,u)   for(i=l;i<u;i++)
#define rfo(i,l,u)  for(i=l;i>=u;i--)

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
   int n,i,j,sum;;
   cin>>n;
   int arr[n];
   fo(i,0,n)
   cin>>arr[i];
   int count=0;
   fo(i,0,n)
   {
       
       sum=arr[i];
       if(sum==0)
       count++;
       fo(j,i+1,n)
       {
           if(sum+arr[j]==0)
           count++;
           sum+=arr[j];
       }
   }
   cout<<count;
   int p=n*(n+1)/2;
   cout<<p-count;
   
   return 0;
}
