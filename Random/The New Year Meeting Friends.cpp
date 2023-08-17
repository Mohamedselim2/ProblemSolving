#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll a,b,c,mx=0,mn=0;
    cin>>a>>b>>c;
    mx=max(a,max(b,c));
    mn=min(a,min(b,c));
    cout<<mx-mn;
}