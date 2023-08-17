#include<iostream>
#include<iomanip>
using namespace std ;
int main ()
{

float R ; 
double pi = 3.141592653;
cin >> R ;
long double area = pi * (R*R);
cout << fixed << setprecision(9) <<  area  ;

}