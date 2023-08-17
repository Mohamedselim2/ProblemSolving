#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int x,a,b,m=0,c=0,i;
    cin>>x;
    for (i=1;i<=x;i++)
    {
        cin>>a>>b;
        if(a>b)m++;
        else if(a<b)c++;
    }
    if(m>c)cout<<"Mishka";
    else if(c>m)cout<<"Chris";
    else if(c==m) cout<<"Friendship is magic!^^";
}