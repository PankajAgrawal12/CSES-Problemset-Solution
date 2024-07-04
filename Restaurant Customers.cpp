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
    ll a[n],l[n];
    int x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        a[i]=x;
        l[i]=y;
    }
    sort(a,a+n);
    sort(l,l+n);
    int cnt=1,ans=1,i=1,j=0;
    while(i<n && j<n)
    {
        if(a[i]<l[j])
        {
            cnt++;
            ans=max(ans,cnt);
            i++;
        }
        else
        {
            cnt--;
            j++;
        }
    }
    cout<<ans<<endl;
}
