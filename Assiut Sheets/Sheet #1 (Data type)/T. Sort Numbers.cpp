#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
long long  x , y , z ;
cin >> x >> y >> z;
if (x>=y && x>=z && y>=z )
{
    cout << z << endl;
    cout << y << endl;
    cout << x << endl;
}
else if (x>=y && x>=z && z>=y)
{
    cout << y << endl;
    cout << z << endl;
    cout << x << endl;
}
else if (y>=x && y>=z && x>=z)
{
    cout << z << endl;
    cout << x << endl;
    cout << y << endl;
}
else if (y>=x && y>=z && z>=x)
{
    cout << x << endl;
    cout << z << endl;
    cout << y << endl;
}
else if (z>=x && z>=y && x>=y)
{
    cout << y << endl;
    cout << x << endl;
    cout << z << endl;
}
else if (z>=x && z>=y && y>=x)
{
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
}
cout << endl ;
cout << x << endl;
cout << y << endl;
cout << z << endl;
}
