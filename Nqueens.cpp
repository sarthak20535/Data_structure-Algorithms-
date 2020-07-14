#include <iostream>
#include<stdio.h>
#define N 12 
using namespace std;
void printsolution(int board[][N],int n )
{ 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) 
            printf(" %d ", board[i][j]); 
        printf("\n"); 
    } 
} 


bool canbeplaced(int board[][N],int row,int col,int n)
{
    int i,j;
    for (i = 0; i < col; i++) 
        if (board[row][i]) 
            return false; 
  
    /* Check upper diagonal on left side */
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) 
        if (board[i][j]) 
            return false; i
  
    /* Check lower diagonal on left side */
    for (i = row, j = col; j >= 0 && i < N; i++, j--) 
        if (board[i][j]) 
            return false; 
  
    return true; 
} 
bool solvechess(int board[][N],int col,int n)
{
    if (col>=n)
    return true;
    
    
    for (int i=0;i<n;i++)
    {
        if(canbeplaced(board,i,col,n))
        {
            board[i][col]=1;
        
        if(solvechess(board,col+1,n))
        return true;
        
        board[i][col]=0;
        }
    }
    return false;
}




int main()
{
//   cout << "Hello World" << endl; 
   int n;
   cin>>n;
    int board[N][N]= {0};
    if(solvechess(board,0,n)==false)
    cout<<"Not possible";
    else;
    printsolution(board,n);
    

   
   return 0;
}