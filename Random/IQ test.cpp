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
    ll x,even=0;
    cin>>x;
    ll arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)even++;
    }
    if(even==1){for(int i=0;i<x;i++)
    {if(arr[i]%2==0)cout<<i+1;}} 

    else {for(int i=0;i<x;i++){if(arr[i]%2!=0)cout<<i+1;}}
}