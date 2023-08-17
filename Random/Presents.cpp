#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll x,y;
    cin>>x;
    ll arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<=x;i++)
    {
        for(int c=0;c<x;c++)
        {
            if(arr[c]==i){cout<<c+1<<" ";}
        }
    }
}