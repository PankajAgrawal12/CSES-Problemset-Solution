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
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    ll cnt=0,i=0,j=n-1;
    while(i<=j)
    {
        if(arr[j]+arr[i]<=k)
        {
            i++;
            j--;
        }
        else
        {
            j--;
        }
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
