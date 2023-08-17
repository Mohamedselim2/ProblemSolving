#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ll x=0,i,a;
    str s;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>s;
        if(s[0]=='+'||s[2]=='+')x++;
        else if (s[0]=='-'||s[2]=='-')x--;
    }
    cout<<x;
}