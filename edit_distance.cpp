
//question is like LCS of GFG 

#include <bits/stdc++.h>
using namespace std;
int dp[100][100];
int LCS(int dp[100][100], string X, string Y, int m, int n){
    if(n==0) return m;
    if(m==0) return n;
    if(dp[m-1][n-1]!=-1) return dp[m-1][n-1];
    if(X[m-1]==Y[n-1]){
        dp[m-1][n-1]=LCS(dp,X,Y,m-1,n-1);
    }
    else{
        dp[m-1][n-1]=1+min(LCS(dp,X,Y,m,n-1),min(LCS(dp,X,Y,m-1,n),LCS(dp,X,Y,m-1,n-1)));
    }
    return dp[m-1][n-1];
}
int main() {
	int t; cin>>t;
	while(t--){
	    int m,n; cin>>m>>n;
	    string X,Y; cin>>X>>Y;
	    memset(dp,-1,sizeof(dp));
	    cout<<LCS(dp,X,Y,m,n)<<endl;
	}
	return 0;
}