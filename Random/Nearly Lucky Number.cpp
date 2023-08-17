#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    int i,h=0;
    str x;
    cin>>x;
    for (i=0;i<x.length();i++)
    {
        if(x[i]=='4' || x[i]=='7')h++;
    }
    if(h==4||h==7)cout<<"YES";
    else cout<<"NO";
}