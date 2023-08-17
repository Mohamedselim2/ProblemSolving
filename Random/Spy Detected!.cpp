#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll x,i,b,y,c,z=0;
    cin>>x;
    while(x--)
    {
        cin>>b;
        ll y[b];
        for(c=0;c<b;c++)
        {
            cin>>y[c];   
        }
        z=y[0];
        for(c=0;c<b;c++)
        {
            if( c==0 && y[c]!=y[c+1] && y[c]!=y[c+2] ){ z=c; break; }
            else if( c==1 && y[c]!=y[c-1] && y[c]!=y[c+1] ){ z=c; break; }
            else if( c>1 && y[c]!=y[c-1] && y[c]!=y[c-2] ){ z=c; break; }   
        }
        cout<<z+1<<endl;
    }   
}