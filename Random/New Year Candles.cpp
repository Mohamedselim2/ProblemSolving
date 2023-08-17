#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<cmath>
#include<ctime>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll x,y;
    cin>>x>>y;
    for(int i=1;i<=x;i++)
    {
        if(i%y==0){x++;}
    }
    cout<<x;
}