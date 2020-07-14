#include <iostream>

using namespace std;
class graph
{
private:
int n;
int g[10][10];

public:
 graph(int x)
{
    n=x;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        g[i][j]=0;
    }
}

void display_adjacentmatrix()
{
    for(int i=0;i<n;i++)
    {
        cout<<"\n";
        for(int j=0;j<n;j++)
        cout<<" "<<g[i][j];
    }
}
void addedge(int x,int y)
{
    g[y][x]=1;
    g[x][y]=1;
    
}
};

int main()
{
    graph g1(4);
    g1.addedge(0,1);
    g1.addedge(3,1);
    g1.display_adjacentmatrix();
   return 0;
}