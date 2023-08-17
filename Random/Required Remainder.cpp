#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll n,a,b,c;
    cin>>n;
    while (n--)
    {
        cin>>a>>b>>c;
        if( c%a==b ){ cout<<c<<endl; }
        else if( c<=a ){ cout<<b<<endl; }
        else if( c%a>b ){ cout<<c - (c%a) + b<<endl; }
        else{ cout<<c - (c%a) - (a-b)<<endl; }
    }
}