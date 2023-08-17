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
    ll x,mx,mn;  cin>>x;
    ll arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<x;i++)
    {
        if(i==0){mx=arr[x-1]-arr[i];mn=abs(arr[i+1]-arr[i]);}
        else if(i==x-1){mx=arr[i]-arr[0];mn=arr[i]-arr[i-1];}
        else
        {
            mx=max(abs(arr[x-1]-arr[i]),abs(arr[i]-arr[0]));
            mn=min(abs(arr[i+1]-arr[i]),abs(arr[i]-arr[i-1]));
        }
        cout<<mn<<" "<<mx<<endl;
    }
}