
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
void sieve(int n)
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
   
   for(int p=2;p*p<=n;p++)
    {
       if(prime[p]==true)
       {
           for(int i=p*p;i<=n;i+=p)
           prime[i]=false;
       }
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i])
        cout<<i<<" ";
    }
    
    
}


signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    sieve(n);

    return 0;
}