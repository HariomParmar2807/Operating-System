#include<bits/stdc++.h>
using namespace std;

void Element(int del,int size,int ar[]){
    int count1=0,i;
  for(i=0; i<size; i++)
	{
		if(ar[i]==del)
		{
			for(int j=i; j<(size-1); j++)
			{
				ar[j]=ar[j+1];
			}
			count1++;
			break;
		}
	}
	if(count1==0)
	{
		cout<<"Element not found..!!";
	}
}

int main()
{

    int n,i,j,count2=0;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++){
        cin>>ar[i];
    }

    for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
        if(ar[i]==ar[j])
           delete(ar[j],n,ar);
           count2++;

            }
    }
    cout<<count2;


    return 0;
}
