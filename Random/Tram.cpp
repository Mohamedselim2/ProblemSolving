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
    ll x,mcap=0,ucap=0,min,pls;   cin>>x;
    for(int i=1;i<=x;i++)
    {
        cin>>min;
        ucap=abs(ucap-min);
        cin>>pls;
        ucap=abs(ucap+pls);
        if(mcap<ucap)mcap=ucap;
    }
    cout<<mcap<<endl;
}