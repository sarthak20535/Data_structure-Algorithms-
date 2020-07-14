
//it is generic sum from r1,c1 to r2,c2

#include <iostream>
using namespace std;
int sumarr[1001][1001]={0};
int ar[1001][1001];
int findsum(int ar[1001][1001],int X,int Y){
if((X<1)||(Y<1))
return 0;

if(sumarr[X][Y]!=0)
return sumarr[X][Y];
else
sumarr[X][Y]=findsum(ar,X-1,Y)+findsum(ar,X,Y-1)-findsum(ar,X-1,Y-1)+ar[X][Y];
return sumarr[X][Y];
}
int main()
{
int N,M,i,j,no,Q,r2,c2,sum,r1,c1;
cin>>N>>M;
for(i=1;i<=N;i++){
for(j=1;j<=M;j++){
cin>>no;
ar[i][j]=no;
}
}
cin>>Q;
while(Q-->0){
    
cin>>r1>>c1;
cin>>r2>>c2;
sum=findsum(ar,r2,c2)-findsum(ar,r1-1,c2)-findsum(ar,r2,c1-1)+findsum(ar,r1-1,c1-1);
cout<<sum<<endl;
}
}