#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll x,r,b,d;     ll i,c;    ll f,m,s;
    cin>>x;
    for(i=1;i<=x;i++)
    {
        cin>>r>>b>>d;
        m=min(r,b);
        f=abs(r-b);
        s=(f+m-1)/m;
        if(s<=d) cout << "YES" << endl;
        else cout << "NO" << endl ;
    }
} 