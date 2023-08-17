#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x,y,sum=0,c,i=0,s;
cin>>s;
while(i<=s-1)   
{
    cin>>x>>y;
    if(x>=y)
    { 
        for(c=y+1;c<=x-1;c++)
        {
            if(c%2==1)sum+=c;
        }
        cout<<sum<<endl;
        sum=0;
    }
    else
    { 
        for(c=x+1;c<=y-1;c++)
        {
            if(c%2==1)sum+=c;
        }
        cout<<sum<<endl;
        sum=0;
    }
    i++;
} 
}