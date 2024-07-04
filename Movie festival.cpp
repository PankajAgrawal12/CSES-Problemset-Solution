#include <bits/stdc++.h>
typedef long long int ll;
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define w(t)  \
    ll t;     \
    cin >> t; \
    while (t--)
#define mod 1000000007

using namespace std;

int main()
{
    fast_io
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    ll start,end;
    for(int i=0;i<n;i++)
    {
        cin>>start>>end;
        v.push_back({end,start});
    }
    sort(v.begin(),v.end());
    ll count=0,time=0;
    for(auto it:v)
    {
        if(it.second >= time)
        {
            count++;
            time=it.first;
        }       
    }
    cout<<count<<endl;
}
