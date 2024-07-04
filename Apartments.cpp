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
    ll n,k,m;
    cin>>n>>m>>k;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    ll brr[m];
    for(int i=0;i<m;i++)
        cin>>brr[i];
    sort(arr,arr+n);
    sort(brr,brr+m);
    int i=0,j=0,cnt=0;
    while(i<n && j<m)
    {
        if(arr[i]==brr[j])
        {
            cnt++;
            i++;
            j++;
        }
        else if(abs(arr[i]-brr[j])<=k)
        {
            cnt++;
            i++;
            j++;
        }
        else if(arr[i]>brr[j])
            j++;
        else
            i++;
    }
    cout<<cnt<<endl;
    return 0;
}


// input
// 10 10 0
// 37 62 56 69 34 46 10 86 16 49
// 50 95 47 43 9 62 83 71 71 7
// op=1 !=8
