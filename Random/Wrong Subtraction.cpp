#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ll y,i,f,x;
    cin>>x>>y;
    for(i=1;i<=y;i++)
    {
        if(x%10==0) x/=10;
        else x-=1;

    }        
    cout<<x;
}