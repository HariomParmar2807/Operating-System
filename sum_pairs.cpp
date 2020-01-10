#include<bits/stdc++.h>
using namespace std;


int main(){

    int size, i, j, count,temp,max_freq=0,sum=0;
     cin>>size;
     int arr[size],freq[size];
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
        freq[i] = -1;
    }

    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
               freq[j] = 0;
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }


    for(i=0;i<size;i++){
            if(freq[i]!=0){
              if(freq[i]%2==0){sum=sum+(freq[i]/2);}
              else
              sum=sum+((freq[i]-1)/2);
            }

            }
            cout<<sum;




    return 0;
}

