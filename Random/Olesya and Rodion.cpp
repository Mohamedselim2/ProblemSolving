#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x,c,i;
string y;
cin>>x>>y;
if (x==1&&y=="10")
{
    cout<<"-1"<<endl;
}


else
{
    if(y=="10")
    {
        x--;
    }
    for(c=1;c<=x-1;c++)
    {
        y=y+"0";
    }
cout<<y<<endl;
}


}