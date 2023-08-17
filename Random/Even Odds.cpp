#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll num, poss;
    cin>>num>>poss;
 
    ll EvenN, OddN;
    if( num%2==0 )
    { 
        EvenN=num/2;
        OddN=EvenN; 
    }
 
    else
    { 
        EvenN=num/2;  
        OddN=EvenN+1;
    }
 
    if( poss<=OddN )
    { 
        cout<<poss+(poss-1);
    }
    else{ cout<<(poss-OddN)*2; }
}