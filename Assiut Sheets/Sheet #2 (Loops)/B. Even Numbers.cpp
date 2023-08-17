#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
long long x ;
cin >> x ;
if(x==0||x==1) cout <<"-1";
else
{   
    for (int c=1;c<=x;c++)
    {
        if(c%2==0)cout<< c << endl;
    }
}
}

