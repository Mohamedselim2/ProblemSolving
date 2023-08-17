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
    str x;    ll a,c=0;
    cin>>x;
    ll sz=x.length();
    ll arr[sz];
    for (int i=0;i<sz;i++)
    {

        if(x[i]=='+')continue;
        arr[c]=x[i]-'0';
        c++;
    }

    int swp;
    for (int i=0;i<c;i++)
    {
        for (int co=0;co<c-1;co++)
        {
            if(arr[co]>arr[co+1] ){swp=arr[co];arr[co]=arr[co+1];arr[co+1]=swp;}
        }
    }

    for (int i=0;i<c;i++)
    {
        if(i!=c-1)cout<<arr[i]<<"+";
        else cout<<arr[i];
    }
}