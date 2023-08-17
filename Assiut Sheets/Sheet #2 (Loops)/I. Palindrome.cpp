#include <iostream>
#include <bits/stdc++.h>
#include<string>
#include<algorithm>
#include <string>
using namespace std;
int main()
{
    int size , counter ,num1,num2;
    string list ;
    cin >> list ;
    size=list.size();
    char list2 [size] ;
    counter=0;
    for(int c = size-1;c>=0;c--)
    {
        list2[counter]=list[c];
        counter++;
    }

    stringstream s;
    s<<list;
    s>>num1;
    stringstream s1;
    s1<<list2;
    s1>>num2;
    if(num1 ==num2) cout <<num2<<endl<<"YES";
    else cout <<num2<<endl<<"NO";


} 