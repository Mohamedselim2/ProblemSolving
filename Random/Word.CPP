#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ll i,c=0,s=0;
    str x;
    cin>>x;
    for (i=0;i<x.length();i++)
    {
        if(65<=x[i]&&x[i]<=90)c++;
        else s++;
    }
if(c>s)
{
    for(i=0;i<=x.length();i++)
    {
        x[i]=toupper(x[i]);
    }
}
else 
{
    for(i=0;i<=x.length();i++)
    {
        x[i]=tolower(x[i]);
    }
}
cout<<x;
}
