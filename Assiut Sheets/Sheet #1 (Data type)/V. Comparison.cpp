#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
long long  x , y ;
char z ;
cin >> x >> z >> y;
if (z==62 && x>y)
{
    cout << "Right";
}
else if (z ==62 && y>x )
{
    cout << "Wrong" ;
}
else if (z ==62 && y==x )
{
    cout << "Wrong" ;
}
else if (z==60 && x<y)
{
    cout << "Right";
}
else if (z==60 && x>y )
{
    cout << "Wrong" ;
}
else if (z==60 && x==y )
{
    cout << "Wrong" ;
}
else if (z==61 && x>y )
{
    cout << "Wrong" ;
}
else if (z==61 && x<y )
{
    cout << "Wrong" ;
}
else if (z==61 && x==y)
{
    cout << "Right" ;
}
}