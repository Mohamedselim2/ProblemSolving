#include <bits/stdc++.h>
using namespace std;
int main()
{
long long v,c,num,z=0,min,m=0,l;
cin>>v;
int x[v];
for(c=0;c<v;c++)
{
    cin>>x[c];
    if(c==0)min=x[c];
    if(min>x[c])
    {
        min=x[c];   
        m=c;
    } 
}
m++;
cout<<min<<" "<<m;
}