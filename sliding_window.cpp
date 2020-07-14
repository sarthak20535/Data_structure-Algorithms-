
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
#define endl        '\n'
#define allfo(s)    for(auto it=(s).begin();it!=(s).end();it++)
int gcd(int a, int b) {if(a>b)swap(a,b) ;  if (a == 0)  return b; return gcd(b % a, a); }

int window_sliding(int arr[],int k,int n)
{
 
    int i,maxm=0;
    int curr_sum=0;
    fo(i,0,k)
    {
        curr_sum+=arr[i];
    }
    maxm=curr_sum;
    int j=k;
    i=0;
    while(j<n)
    {
       curr_sum=curr_sum-arr[i]+arr[j];
       i++;j++;
       maxm=max(maxm,curr_sum);
       
    }
    return maxm;
}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,k,i;
    cin>>n>>k;
    int arr[n];
    fo(i,0,n)
    {
        cin>>arr[i];
        
    }
    if(n<k)
    cout<<"Invalid";
    else
    cout<<window_sliding(arr,k,n);
    

    return 0;
}