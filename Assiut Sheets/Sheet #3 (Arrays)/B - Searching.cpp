#include <bits/stdc++.h>
using namespace std;
int main()
{
long long v,c,num,z=0;
cin>>v;
int x[v];
for(c=0;c<v;c++)
{
   cin>>x[c];
}
cin>>num;
for(c=0;c<v;c++)
{
    if(num==x[c])
    {
        z++;
        cout<<c;
        return 0;
    }
}
if(z==0) 
{
    cout<<"-1";
}
}