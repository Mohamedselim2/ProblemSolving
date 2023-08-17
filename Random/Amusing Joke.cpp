#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    int a=0;
    str x,y,z;
    cin>>x>>y>>z;
    if(x.length()+y.length()!=z.length()){cout<<"NO";return 0;}
    for(int i=0;i<x.length();i++)
    {
        for(int c=0;c<z.length();c++)
        {
            if(x[i]==z[c]){z[c]='*';a++;break;}
        }
    }
    for(int i=0;i<y.length();i++)
    {
        for(int c=0;c<z.length();c++)
        {
            if(y[i]==z[c]){z[c]='*';a++;break;}
        }   
    }
    if(x.length()+y.length()==a)cout<<"YES";
    else cout<<"NO";
}