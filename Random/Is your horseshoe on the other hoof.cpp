#include<bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    int x[4],s=0;
    for(int i=0;i<4;i++)
    {
        cin>>x[i];
    }

    for(int i=0;i<4;i++)
    {
        for(int c=0;c<4;c++)
        {
            if(x[i]==x[c]){s++;}
        }
    }
    if(s==6)cout<<"1";
    else if(s==10||s==8)cout<<"2";
    else if(s==16)cout<<"3";
    else cout<<"0";
}