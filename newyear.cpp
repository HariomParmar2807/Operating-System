// New year chaos
#include<bits/stdc++.h>
using namespace std;

bool checkpos(int a[],int n)
{
    int i;
    for(i=1;i<=n;i++)
        {
        if((a[i]-i)>2)
            {
            return false;
        }
    }
    return true;
}


int main(){
    int T;
    cin >> T;
    for(int p = 0;  p< T; p++){
        int n,i,j,k=0,temp;
        cin >> n;
        int q[n];

        for(i = 1;i <= n;i++){
           cin >> q[i];

        }
        if(checkpos(q,n))
        {
            for(i=1;i<=n;i++)
                {
                for(j=1;j<=n-i;j++)
                    {
                    if(q[j]>q[j+1])
                        {

                        temp=q[j];
                        q[j]=q[j+1];
                        q[j+1]=temp;
                        k++;

                    }
                }
            }
            cout<<k<<endl;
        }
        else
        {
            cout<<"Too chaotic"<<endl;
        }
    }
    return 0;
}

