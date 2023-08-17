#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ll m,n,a,x,y;
    cin>>m>>n>>a;
    x=m/a;
    y=n/a;
    if(m%a!=0)x++;
    if(n%a!=0)y++;
    cout<<x*y;
}