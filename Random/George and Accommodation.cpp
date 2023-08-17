#include<bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;
int main()
{
    ll x,i,tp,rp,a=0;
    cin>>x;
    for(i=1;i<=x;i++)
    {
        cin>>tp>>rp;
        if(rp>tp&&rp-tp!=1)a++;
    }
    cout<<a;
}