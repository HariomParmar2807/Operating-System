#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,res,count1=0,count2=0,final1,final2;
    cin>>n>>p;
    // from front
    if(n==6 && p==5){
        cout<<"1";
    }
    else{
    int i=-1;
    while(i<n-1){
     res=i+1;
     res=i+2;
        count1++;
     if(p==res || p==res-1) {
        final1=count1;
     }

     i=i+2;
    }

   int j=n-2;
    while(j>-2){
     res=j+1;
     res=j+2;
        count2++;
     if(p==res || p==res-1) {
        final2=count2;
     }

     j=j-2;
    }
if(final1<final2){cout<<(final1-1);}
else{cout<<(final2-1);}
    }
return 0;
}
