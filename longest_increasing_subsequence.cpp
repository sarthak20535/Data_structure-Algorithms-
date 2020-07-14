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
    
int n,i,j;
cin>>n;
vi vect(n);
vi long_inc_seq(n);

fo(i,0,n)
{
cin>>vect[i];
long_inc_seq[i]=1;
}


fo(i,1,n)
{
    fo(j,0,i)
    {
        if(vect[j]<vect[i])
        long_inc_seq[i]=max(long_inc_seq[i],long_inc_seq[j]+1);
    }
}

// fo(i,0,n)
// {
// cout<<long_inc_seq[i]<<" ";
// }

cout<<"maximum length of increasing subsequence is "<< *max_element(long_inc_seq.begin(),long_inc_seq.end());
    return 0;
}





