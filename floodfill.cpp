#include<bits/stdc++.h>
using namespace std;
const int a=11,b=11;
bool DFS(int x,int y,bool visited[a][b],int ar[a][b],int n,int m){

if( x == n && y== m)
return true;
if(x > n || y > n)
return false;
if(x <= 0 || y <= 0)
return false;
if(ar[x][y] == 0)
return false;
if( visited[x][y] == true)
return false;


visited[x][y] = true;

if(DFS(x-1,y,visited,ar,n,m))
return true;
if(DFS(x+1,y,visited,ar,n,m))
return true;
if(DFS(x,y-1,visited,ar,n,m))
return true;
if(DFS(x,y+1,visited,ar,n,m))
return true;

return false;
}

int main(){
int n,m;
cin>>n>>m;

int ar[11][11];
bool visited[11][11];

for(int i = 1;i <= n; i++ ){
for(int j = 1;j <= m; j++){
cin>>ar[i][j];
visited[i][j] = false;
}
}

bool ans = DFS(1,1,visited,ar,n,m);
if(ans)
cout<<"Yes";
else
cout<<"No";

return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

// with recursion
#include<bits/stdc++.h>
using namespace std;
int n,m;
int arr[100][100];
void print()
{
    for(int i=0;i<n;i++)
    {
	    for(int j=0;j<m;j++)
	    {
	        cout<<arr[i][j]<<" ";
	    }
    }
}
void funct(int x,int y,int p,int k)
{
    if(x<0 || y<0 || x>=n || y>=m)
    return;
    if(arr[x][y]!=p)
    return;
    
    arr[x][y]=k;
    funct(x-1,y,p,k);
     funct(x+1,y,p,k);
      funct(x,y-1,p,k);
       funct(x,y+1,p,k);
       //print();
       
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	   
	    cin>>n>>m;
	    
	    for(int i=0;i<n;i++)
	    {
	    for(int j=0;j<m;j++)
	    {
	        cin>>arr[i][j];
	    }
	    }
	    int x,y,k,p;
	    cin>>x>>y>>k;
	    p=arr[x][y];
	    funct(x,y,p,k);
	    print();
	    cout<<endl;
	}
	return 0;
}