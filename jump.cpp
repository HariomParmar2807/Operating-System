#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i,jump=0;
  cin>>n;
  int c[n];
  for(i=0;i<n;i++){
    cin>>c[i];
  }

  i=0;
  while(i<n-1){
        if(c[i]==0 && c[i+2]==0){jump++;i=i+2;}
        else if(c[i]==0 && c[i+2]==1){jump++;i++;}
        else if( c[i]==1){jump=jump;i++;}
        else{jump++;i++;}
  }
  if(c[n-1==0]){jump=jump;}
  cout<<jump;
  return 0;
}

