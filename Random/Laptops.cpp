#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x,y,i,z,l=0,v=0;
cin>>x;
for(i=1;i<=x;i++)
{
    cin>>y>>z;
    if(y>=z) l++;
    else if (z>=y) v++;
}
if(l>0&&v>0)cout <<"Happy Alex";
else cout <<"Poor Alex";
}

