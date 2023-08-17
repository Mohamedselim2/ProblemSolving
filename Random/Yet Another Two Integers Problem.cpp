#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll n,a,b,s=0,c=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        s=abs(a-b);
        if(a==b){cout<<"0"<<endl;}
        else if(s%10==0){cout<<s/10<<endl;}
        else
        {
            c=s/10;
            cout<<c+1<<endl;
        }
    }  
}
