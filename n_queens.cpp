#include<bits/stdc++.h>
using namespace std;

int board[20],count;

void print(int n)
{
    int i,j;
    cout<<"Solution"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"\n\n"<<i;
        for(j=1;j<=n;j++)
        {
            if(board[i]==j)
                cout<<"\tQ";
            else
                cout<<"\t-";
        }
    }
}
int place(int row,int col)
{
    int i;
    for(i=1;i<=(row-1);i++)
    {
        if(board[i]==col)
            return 0;
        else
            if(abs(board[i]-col)==abs(i-row))
                return 0;
    }
   return 1;
}
void queen(int row,int n)
{
    int col;
    for(col=1;col<=n;col++){
        if(place(row,col))
        {
            board[row]=col;
            if(row==n)
                print(n);
            else
                queen(row+1,n);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    queen(1,n);
    return 0;

}
