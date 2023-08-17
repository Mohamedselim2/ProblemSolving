#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x,s,c,z,g=1,n=1,f,i;
cin>>x;
s=x-1;
for(i=1;i<=x;i++)
{
    for(c=1;c<=s;c++)
    {
        cout<<" ";
    }

    for(z=1;z<=g;z++)
    {
    cout<<"*";
    }

    for(f=1;f<n;f++)
    {
        if(n>1)cout<<"*";
    }
    cout<<endl;
    g++;
    n++;
    s--;
}


long long m,k,j,h,t,r,u,e=0;
    j=x;
    t=x;
    u=x-1;
for(m=1;m<=x;m++)
{
    for(r=1;r<=e;r++) 
    {
        if(e>=1)
        {
            cout<<" ";
        }
    }

    for(k=1;k<=j;k++)
    {
         cout<<"*";
    }

    for(h=1;h<t;h++) 
    {
        cout<<"*";
    }

    cout<<endl;
    j--;
    e++;
    t--;
    u--;
}
}
