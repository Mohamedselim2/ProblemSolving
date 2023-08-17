#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll x,sum=0,sm=97;
    str s;
    cin>>x>>s; if(x<26){cout<<"NO";return 0;}

    for(int i=65;i<=90;i++)
    {
        for(int c=0;c<x;c++)
        {
            if(s[c]==i || s[c]==sm){sum++;break;}
        }
        sm++;
    }
    if(sum==26)cout<<"YES";
    else cout<<"NO";
}