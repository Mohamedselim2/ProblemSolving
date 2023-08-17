#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
long long  n1 , n2 , n3 , n4 ;
cin >> n1 >> n2 >> n3 >> n4 ; 
if (( n3<n1 && n1>n4) || (n3 < n2 && n4 > n3))
{
    cout <<"-1";
}
else if ( n1>n3 && n2>n4) 
{
    cout << n1 <<" "<<n4 ;
}
else if (n1>n3 && n2==n4 )
{
    cout << n1 <<" "<<n4 ;
}
else if (n1>n3 && n2<n4 )
{
    cout << n1 <<" "<<n2 ;
}

else if (n1<n3 && n2>n4)
{

    cout << n4 <<" "<<n4 ;
}    
else if (n1<n3 && n2<n4)
{

    cout << n3 << ""<<n2 ;
}    
else if (n1==n3 && n2>n4)
{

    cout << n3 <<" "<<n2 ;
}    
else if (n1<n3 && n2==n4)
{

    cout << n1 <<" "<<n2 ;
} 
else if (n1==n3 && n2==n4)
{

    cout << n1 <<" "<<n4 ;
} 
else if (n1==n3 && n2>n4)
{

    cout << n1 <<" "<<n2 ;
} 
else if (n1==n3 && n2<n4)
{

    cout << n1 <<" "<<n2 ;
} 
else 
{
    cout <<"-1" ;
}
}
