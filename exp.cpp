#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 998244353
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   ll s;
   cin>>s;
   ll arr[s];
   for(ll i=0;i<s;i++)
   cin>>arr[i];
   map<ll,ll> m;
   for(ll i=0;i<s;i++)
   m[arr[i]]=i;
ll end=0;
ll groups=0;
for(ll i=0;i<s;i++)
{
    end=max(end,m[arr[i]]);
    if(i==end)
    {
        groups++;
        end++;
    }
}
ll res=1;
for(ll i=0;i<groups-1;i++)
res=(2*res)%mod;
cout<<res;
    return 0;
}