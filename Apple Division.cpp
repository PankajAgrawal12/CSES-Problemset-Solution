#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define MOD 1000000007

using namespace std;

ll fun(ll index,ll sum1,ll sum2,ll *arr,ll n)
{
	if(index==n)
		return abs(sum1-sum2);
	
	ll take=fun(index+1,sum1+arr[index],sum2,arr,n);
	ll notTake=fun(index+1,sum1,sum2+arr[index],arr,n);

	return min(take,notTake);
}

int main()
{
	fast_io
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	ll diff=fun(0,0,0,arr,n);
	cout<<diff<<"\n";
	
	return 0;
}


// Idea is to use recusion and explore all the combination of groups,either take the value in the first group and increase the index or take the element in the second group and increase the index and at the end calculate which groups have the least difference
// Similar to knapsack problem



