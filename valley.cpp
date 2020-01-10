#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int n,val=0,i=0,j=0;
    cin>>n;

    char ch[n];
    for(int i=0;i<n;i++){cin>>ch[i];}

    for(j=0;j<n;j++){
        if(ch[j]=='U'){
            i++;
           if(i==0)val++;}
        else if(ch[j]=='D')
            i--;

    }
    cout<<val;
    return 0;
}
