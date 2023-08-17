#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int  n1 , n2 , n3;
cin >> n1 >> n2 >> n3;
int sum1 = n1+n2+n3;
int sum2 = n1*(n2+n3);
int sum3 = n1*n2*n3;
int sum4 = (n1+n2);
sum4= sum4*n3 ;
if      ((sum1>=sum2 && sum1>=sum3 )&&sum1>=sum4 ) cout << sum1 <<endl;
else if ((sum2>=sum1 && sum2>=sum3 )&&sum2>=sum4 ) cout << sum2 <<endl;
else if ((sum3>=sum1 && sum3>=sum2 )&&sum3>=sum4 ) cout << sum3 <<endl;
else if ((sum4>=sum1 && sum4>=sum2 )&&sum4>=sum3 ) cout << sum4 <<endl;

}

