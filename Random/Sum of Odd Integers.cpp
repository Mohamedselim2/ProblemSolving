#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x,i,n1,n2,p,m,l;
cin>>x;
for(i=1;i<=x;i++)
{
    cin>>n1>>n2;
    p=n2*n2;
    m=n1%2;
    l=n2%2;
    if(m==l&&p<=n1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}