#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll x,mx=0,sum=0;
    cin>>x;
    ll arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
        if(arr[i]>mx)mx=arr[i];
    }
    for(int i=0;i<x;i++)
    {
        sum+=(mx-arr[i]);
    }
    cout<<sum; 
}
