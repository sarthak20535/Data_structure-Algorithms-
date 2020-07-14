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


bool fun(string str)
{
    
    stack<char>dd;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='{' || str[i]=='[' || str[i]=='(')
        dd.push(str[i]);
        
        if(str[i]=='}' || str[i]==']' || str[i]==')')
        
        {
            if(str[i]=='}' && (dd.empty()||dd.top()!='{' ))
            return false;
            
            if(str[i]=='}' && dd.top()=='{')
            dd.pop();
            
             if(str[i]==']' && (dd.empty()||dd.top()!='['))
            return false;
            
            if(str[i]==']' && dd.top()=='[')
           dd.pop();
            
             if(str[i]==')' && (dd.empty()||dd.top()!='('))
            return false;
            
            if(str[i]==')' && dd.top()=='(')
           dd.pop();
            
        }
        
        
    }
    
    if(dd.empty())
    return true;
    
    return false;
    
}





signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    string str;
    cin>>n;
    while(n--)
    {
        cin>>str;
        bool tt= fun(str);
        if(tt)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        
        
    }

    return 0;
}