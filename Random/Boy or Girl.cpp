#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    int i,h=0,c,sum=0;
    str x;
    cin>>x;
    for (i=0;i<x.length();i++)
    {
        for(c=0;c<x.length();c++)
        {
            if(x[i]==x[c]&&c!=i){x[i]='*';h++;}
        }
    }
    sum=x.length()-h;
    if(sum%2==1)cout<<"IGNORE HIM!";
    else if(sum%2==0) cout<<"CHAT WITH HER!";
}