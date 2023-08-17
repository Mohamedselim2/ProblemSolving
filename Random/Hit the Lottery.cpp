#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    int x,s=0;
    cin>>x;
    while(x!=0)
    {
        if(x>=100)
        {x-=100; s++;}
        else if(x>=20)
        {x-=20; s++;}
        else if(x>=10)
        {x-=10; s++;}
        else if(x>=5)
        {x-=5; s++;}
        else if(x>=1)
        {x-=1; s++;}
    }
    cout<<s;
}