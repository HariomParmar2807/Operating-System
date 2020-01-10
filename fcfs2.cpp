#include<iostream>
using namespace std;

# define max 20


int main()
{
    int n, p[n],at[max],bt[max],tat[max],wt[max],temp,sum;
    cout<<"Enter no. of processes=";
    cin>>n;
     cout<<"Enter Arrival time of each process=";
     for(int i=0;i<n;i++)
     {
         cin>>at[i];            }
     cout<<"Enter Burst time of each process=";
     for(int i=0;i<n;i++)
     {
         cin>>bt[i];            }

       // sorting according to arrival time
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(at[j]>at[i])
           {
                temp=at[j];
               at[j]=at[i];
               at[i]=temp;

               temp=p[j];
               p[j]=p[i];
               p[i]=temp;

               temp=bt[j];
               bt[j]=bt[i];
               bt[i]=temp;

           }


        }
       }

 // waiting time
 wt[0] = 0;

    // calculating waiting time
    for (int  i = 1; i < n ; i++ )
        wt[i] =  bt[i-1] + wt[i-1] ;

   // Turn around time
   for (int  i = 0; i < n ; i++)
        tat[i] = bt[i] + wt[i];

for(int k=0;k<n;k++){

cout<<"process \t\t Arrival \t\t Burst \t\t waiting \t\t turnaround"<<p[k]<<at[k]<<bt[k]<<wt[k]<<tat[k];

}
}
