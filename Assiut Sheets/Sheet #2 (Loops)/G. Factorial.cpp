#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long mn, f=1 ,x;
    cin >> mn ;
    for (int i=1 ; i<=mn ; i++ )
    {
        cin >> x ;
        for (int c=1 ;c<=x;c++) 
        {
            f*=c ;
        
        }
    
        cout << f << endl;
        f=1 ;
    }
        
}