#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ll x[5][5],r,c,a,b,s;
    for(r=0;r<5;r++)
    {
        for(c=0;c<5;c++)
        {
            cin>>x[r][c];
            if(x[r][c]==1){a=r+1;b=c+1;}
        }
    }
    s=abs(a-3)+abs(b-3);
    cout<<s;
}