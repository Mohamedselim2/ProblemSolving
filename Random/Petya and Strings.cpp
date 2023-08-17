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
    str x,y;
    ll a=0,b=0;
    cin>>x>>y;
    for(int i=0;i<x.length();i++)
    { 
        a=x[i]; b=y[i];
        if(a>90)a-=32;    if(b>90)b-=32;
        if(a>b){cout<<"1";return 0;}
        else if(a<b){cout<<"-1";return 0;}
    }
    cout<<"0";
}