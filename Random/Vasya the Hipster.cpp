#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll b,r,mn,mx;
    cin>>b>>r;
    mn=min(b,r);
    mx=max(b,r);
    cout<<mn<<" "<<abs(mn-mx)/2;
}