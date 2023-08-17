#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ll x;
    cin>>x;
    if(x%2==0)cout<<x/2;
    else if(x%2==1)cout<<(x/2)-x;
}