#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<cmath>
#include<ctime>
typedef long long ll;
using namespace std;
typedef string str;
typedef double dou;
typedef long l;
int main()
{
    ll a,b,c,d,sum=0,v; str s;
    cin>>a>>b>>c>>d>>s;
    for(int i=0;i<s.length();i++)
    {
        v=s[i]-48;
        if(v==1)sum+=a;
        else if(v==2)sum+=b;
        else if(v==3)sum+=c;
        else if(v==4)sum+=d;
    }
    cout<<sum;
}