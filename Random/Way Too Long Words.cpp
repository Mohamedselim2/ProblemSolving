#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ll x,i;
    str y;
    cin>>x;
    for(i=1;i<=x;i++)
    {
        cin>>y;
        if(y.length()>10) cout<<y[0]<<y.length()-2<<y[y.length()-1]<<endl;
        else cout<<y<<endl;
    }
}