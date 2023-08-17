#include<bits/stdc++.h>
using namespace std;
int main()
{
long long v,c,sum=0;
cin>>v;
string x;
cin>>x;
for(c=0;c<v;c++)
{
    sum+=x[c]-'0';
}
cout<<sum;
}
