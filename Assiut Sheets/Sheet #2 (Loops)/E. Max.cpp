#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x , y , q=0;
cin >> x ;
for (int c=1;c<=x;c++)
{
    cin >> y ;
    if(y>=q) q=y;
    else q=q ;
}
cout << q ; 


}
