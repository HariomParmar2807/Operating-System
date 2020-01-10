#include<bits/stdc++.h>
using namespace std;



int main()
{
    int b,n,m,i,j,max=-99999,store;
    cin>>b>>n>>m;
    int key[n],usb[m];
    for(i=0;i<n;i++)
        cin>>key[i];
    for(j=0;j<m;j++)
        cin>>usb[j];

    // to purchase the keyboard anc usb
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            store=key[i]+usb[j];
            if(store<b && store>max)
            {
                max=store;
            }
        }
    }
    if(store>b)
        max=-1;
    cout<<max;
    return 0;
}
