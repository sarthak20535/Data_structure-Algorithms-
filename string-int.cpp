#include<bits/stdc++.h>
using namespace std;
int main()
{
string h;
string s;
int k,n,r=0;
cin>>k;
for(int j=0; j<k; j++)
{
cin>>n;
cin >> s;
for(int i = 0 ; i < s.size() ; i++)
{
    if(s[i]%2==1)
    {
        h+=s[i];
        r++;
        if(r==2)break;
    }
}
if(r==2) cout<<h<<endl;
else cout<<-1<<endl;
r=0;
h="";
}
}
