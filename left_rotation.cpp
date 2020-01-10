#include<bits/stdc++.h>
using namespace std;

void Rotatebyone(int ar[],int n)
{
    int temp=ar[0];
    for( int i=0;i<n-1;i++){
        ar[i]=ar[i+1];
    }
    ar[n-1]=temp;
}
void Rotate(int ar[],int n,int d)
    {
        for(int i=0;i<d;i++)
        {
         Rotatebyone(ar,n);

        }
    }

void PrintArray(int ar[],int n) {
    for(int i=0;i<n;i++){cout<<ar[i];}
}

int main()
{
    int n,d;
    cin>>n>>d;
    int ar[n];
    for(int i=0;i<n;i++){cin>>ar[i];}




    Rotate(ar,n,d);
    PrintArray(ar,n);

    return 0;
}
