#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
int main()
{
    ll a,i,x=0,y=0,z=0,n1,n2,n3;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>n1>>n2>>n3;
        x+=n1;y+=n2;z+=n3;
    }
    if((x==0&&y==00)&&(z==0)) cout<<"YES";
    else cout<<"NO";
}