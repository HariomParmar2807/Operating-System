#include<bits/stdc++.h>
using namespace std;



int main()
{
  int arr[6][6],i,j,jj=0,maxsum=-1000;
  for( i=0;i<6;i++){
    for(j=0;j<6;j++)
      cin>>arr[i][j];
  }
    for(i=0;i<4;i++){

    int sum=0;
    for(j=jj;j<jj+3;j++){
      sum=sum+arr[i][j];
      if(j==jj) sum += arr[i+1][jj+1];
       sum=sum+arr[i+2][j];
    }
    if(jj<3)jj=jj+1;
    else jj=0;
    if(sum > maxsum) maxsum = sum;
    if(jj!=0)i--;
  }
  cout<<maxsum;
    return 0;
  }


