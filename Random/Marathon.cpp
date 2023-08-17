#include<bits/stdc++.h>
#include<algorithm>
typedef long long ll;
using namespace std;
typedef string str;
#define fastread() (ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL));
// const int SUI=1e5+1;

int main()
{
    fastread(); 
    int t;  cin>>t;
    while (t--)
    {
        int timur_distace;
        cin>>timur_distace;
        vector<int>v(3);
        for(auto &it:v)cin>>it;
        int counter=0;
        sort(v.begin(),v.end());
        for (int i = 0; i < 3; i++)
        {
            if(v[i]>timur_distace){counter++;}
        }
        cout<<counter<<'\n';
    }
}