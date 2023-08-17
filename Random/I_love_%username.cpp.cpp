#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll x,mx=0,mn,p=0;
    cin>>x;
    ll arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
        if(i==0){mx=arr[i];mn=arr[i];}
        else {if(mx<arr[i]){mx=arr[i];p++;}else if(mn>arr[i]){mn=arr[i];p++;}}
    }
    cout<<p;
}