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
    ll n,m;
    cin>>n>>m;
    int x;
    multiset<ll> price;
    //multi set is used to store duplicates
    for(int i=0;i<n;i++)
    {
        cin>>x;
        price.insert(x);
    }
    for(int i=0;i<m;i++)
    {
        int amount;
        cin>>amount;
        auto it=price.upper_bound(amount);
        if(it==price.begin())
            cout<<"-1\n";
        else
        {
            it--;
            price.erase(it);
            cout<<*it<<endl;
        }
    }
}
