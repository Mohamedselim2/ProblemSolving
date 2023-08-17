#include <bits/stdc++.h>
using namespace std;


long long fun (long long x)
{
int n=x-1;
for(int c=2 ;c<=n;c++)
{
    if(x%c==0) 
    {
        return -1;
    }
}
return x ;
}



int main()
{
    long long counter ,i,num;
    cin>>counter;
    for(i=1 ; i<=counter;i++)
    {
        num=fun(i);
        if((num==i&&num!=0)&&num!=1) cout<<i<<" ";
    }
} 
