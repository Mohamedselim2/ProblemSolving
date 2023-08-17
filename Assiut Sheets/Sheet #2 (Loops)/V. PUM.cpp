#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x,i,c,g=1;
cin>>x;
for(i=1;i<=x;i++)
{
    for(c=1;c<=3;c++)
    {
        cout<<g<<" ";
        g++;

    }
    g++;
    cout<<"PUM";
    cout<<endl;
}
}