#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll x,i,y;
    dou sum=0,f;
    cin>>x;
    for(i=1;i<=x;i++)
    {
        cin>>y;
        sum+=y;
    }
    f=sum/x;
    cout<<fixed<<setprecision(12)<<f;
}