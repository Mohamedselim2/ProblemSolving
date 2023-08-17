#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll r,c,i,l;
    cin>>r>>c;
    str s[c][2];
    for(i=0;i<c;i++)
    {
        for(l=0;l<2;l++)
        {
            cin>>s[i][l];
        }
    }

    str s2[r];
    for(i=0;i<r;i++){cin>>s2[i];}

    for(i=0;i<r;i++)
    {
        for(l=0;l<c;l++)
        {
            if(s2[i]==s[l][0] || s2[i]==s[l][1])
            {
                if(s[l][0].length()>s[l][1].length()){cout<<s[l][1]<<" ";}
                else if(s[l][0].length()<=s[l][1].length()){cout<<s[l][0]<<" ";}
            }
        }
    }
}