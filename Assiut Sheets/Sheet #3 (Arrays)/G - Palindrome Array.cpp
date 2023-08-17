#include <bits/stdc++.h>
using namespace std;
int main()
{
long long v,c,m=0,p,z=1;
cin>>v;
int x[v];
for(c=0;c<v;c++)
{
    cin>>x[c];
}


if(v%2==1)
{
    p=v-1;
    m++;
}
else if (v%2==0)p=v;


for(c=0;c<p;c++)
{
if(x[c]==x[v-z])
{
    m++;
    z++;
}
}
if(m==v)cout<<"YES";
else cout<<"NO";
}