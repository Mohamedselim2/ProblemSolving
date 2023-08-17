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
   if(x[c]>0)x[c]=1;
   else if(x[c]<0)x[c]=2;
   else x[c]=0;
}
for(c=0;c<v;c++)
{
cout<<x[c]<<" ";
}
}
