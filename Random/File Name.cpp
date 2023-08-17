#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll x,c=0;
    str s;
    cin>>x>>s;
    for(int i=0;i<x;i++)
    {   
        if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x'){c++;}
    }
    cout<<c;
}