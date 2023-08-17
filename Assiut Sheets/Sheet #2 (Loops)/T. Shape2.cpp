#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x,i,c,z,n,g,l;
cin>>x;
g=x-1;
l=(x-x)+1;
for(i=1;i<=x;i++) 
{
    for(c=1;c<=g;c++)   
        cout<<" ";
        
    for(z=1;z<=l;z++)
        cout<<"*";

    for(n=1;n<=l;n++)
        if(n>1)cout<<"*";
    
    cout<<endl;
    g--;
    l++;
    
}    
}
