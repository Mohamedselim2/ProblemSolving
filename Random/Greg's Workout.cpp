#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll x,chest=0,bi=0,back=0,c=0;
    cin>>x;
    ll arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];    
        if(c==0){chest+=arr[i];c++;}
        else if(c==1){bi+=arr[i];c++;}
        else if(c==2){back+=arr[i];c++;}
        if(c==3){c=0;}
    }
    if(chest>=bi && chest>=back){cout<<"chest";}
    else if(bi>=chest && bi>=back){cout<<"biceps";}
    else if(back>=bi && back>=chest){cout<<"back";}
}