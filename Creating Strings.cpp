#include<bits/stdc++.h>
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define w(t) ll t; cin>>t; while(t--)
#define MOD 1000000007

using namespace std;

set<string> fun(string s)
{
	// int n=s.length();
	sort(s.begin(),s.end());
	set<string> uniqueString;
	do{
		uniqueString.insert(s);
	}while(next_permutation(s.begin(),s.end()));
	return uniqueString;
}
int main()
{
	fast_io
	string s;
	cin>>s;
	set<string> result=fun(s);
	cout<<result.size()<<"\n";
	for(auto it:result)
		cout<<it<<"\n";
	return 0;
}



//Since n<=8 the input is very small and hence we can generate all the permutations and insert them in a set to make them unique.
