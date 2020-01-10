#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=1,num=0,count=0;
    string str;
    getline(cin,str);

    int n=str.length();
    for(int i=n-1;i>=0;i--){
        if ('0' <= str[i] && str[i] <= '9') {
            num = (str[i] - '0') * x + num;
            x = x * 10;
            count++;
        }
        else
            break;
    }
    if(num==(n-count)){cout<<"Yes";}
    else{cout<<"No";}
   return 0;
}
