#include <iostream>
using namespace std;
int main()
{
long long v,c,min,m=0;
cin>>v;
int x[v];
for(c=0;c<v;c++)
{
    cin>>x[c];
}

min=x[0];
for(c=0;c<v;c++)
{
    if(min>x[c])min=x[c];
}

for(c=0;c<v;c++)
{
    if(min==x[c])m++;
}
if(m%2==0)cout<<"Unlucky";
else if(m%2==1)cout<<"Lucky";
}
