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
    ll n,b,d,emp=0,c=0;      cin>>n>>b>>d;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(ll i=0;i<n;i++)
    {
        if(arr[i]>b){continue;}
        emp+=arr[i];
        if(emp>d){emp=0;c++;}
        
    }
    cout<<c;
}