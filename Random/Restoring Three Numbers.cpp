#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll a,b,c,d,mx;
    cin>>a>>b>>c>>d;
    mx=max(a,max(b,max(c,d)));
    if(mx==d) {cout<<mx-a<<" "<<mx-b<<" "<<mx-c;}  
    else if(mx==c) {cout<<mx-a<<" "<<mx-b<<" "<<mx-d;}  
    else if(mx==b) {cout<<mx-a<<" "<<mx-d<<" "<<mx-c;}  
    else if(mx==a) {cout<<mx-d<<" "<<mx-b<<" "<<mx-c;}  
}