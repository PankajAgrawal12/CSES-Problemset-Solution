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
    ll n,x;
    cin >> n >> x;
    ll arr[n];
    map<ll, ll> mp;
    bool flag = false;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        ll target = x - arr[i];
        if (mp.find(target) != mp.end())
        {
            cout << mp[target] + 1 << " " << i + 1 << endl;
            flag = true;
            break;
        }
        else
        {
            mp[arr[i]] = i;
        }
    }
    if (flag == false)
        cout << "IMPOSSIBLE\n";
}
