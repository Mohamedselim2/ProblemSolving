#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll a,b,c,sum=0,take,z=1;
    cin>>a>>b>>c;
    for(int i=1;i<=c;i++)
    {
        sum+=a*z;
        z++;
    }
    take=sum-b;
    if(take>=1)cout<<take;
    else cout<<"0";
}