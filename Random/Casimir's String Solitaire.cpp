#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x,c,i,b=0,ac=0 ;
string y ;
cin>>x;
for(i=1;i<=x;i++)
{
    cin>>y;
    for(c=0;c<y.size();c++)
    {
        if(y[c]=='B')
        {
            b++;
        }

        else 
        {
            ac++;
        }
    }
    if(b==ac)
    {
        cout<<"YES"<<endl;
    }

    else 
    {
        cout<<"NO"<<endl;
    }
    b=0;
    ac=0;
}
}