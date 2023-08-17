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
    ll n,k,s,c=0;
    cin>>n>>k;
    ll arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i==(k-1))s=arr[i];
    }

    for (int i=0;i<n;i++)
    {
        if(arr[i]>=s && arr[i]!=0)c++;
    }
    cout<<c;
}