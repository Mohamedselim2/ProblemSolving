#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long l;
typedef double dou;
int main()
{
    ll n,pr=0,mt=0,pe=0,s=0;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)pr++;
        else if(arr[i]==2)mt++;
        else pe++;
    }
    s=min(pr,min(mt,pe));
    cout<<s<<endl;
    if(s>0)
    {
        while(s--)
        {
            for(int c=0;c<n;c++)
            {
                if(arr[c]==1){cout<<c+1<<" ";arr[c]=7;break;}
            }
            for(int co=0;co<n;co++)
            {
               if(arr[co]==2){cout<<co+1<<" ";arr[co]=7;break;} 
            }
            for(int cou=0;cou<n;cou++)
            {
                if(arr[cou]==3){cout<<cou+1<<" ";arr[cou]=7;cout<<endl;break;}
            }
        }
    }
}