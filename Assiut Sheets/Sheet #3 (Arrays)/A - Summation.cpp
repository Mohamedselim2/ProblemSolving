#include <bits/stdc++.h>
using namespace std;
int main()
{
long long v,c,sum=0;
cin>>v;
int x[v];
for(c=0;c<v;c++)
{
   cin>>x[c];
    sum+=x[c];
}
cout<<abs(sum);
}