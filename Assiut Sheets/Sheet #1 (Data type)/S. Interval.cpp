#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
float  x    ;
cin >> x  ;
int y = x ;
float z=x-y ;
if (z==0)
{
    cout<<"int "<<y;
}
else {
    cout<<"float "<<y<<" "<<fixed<<setprecision(3)<<z;
}
}
