#include <bits/stdc++.h>
using namespace std;
int main()
{
int x,y,i ,z,c;
cin>> x >> y;
if(x>y) z=x;
else z=y;
for(i=1;i<=x;i++)
{
    if(x%i==0 && y%i==0) c=i;



}
cout<<c;

} 
