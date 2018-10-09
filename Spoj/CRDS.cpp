#include <bits/stdc++.h>
using namespace std;
 
long long int mod=1000007;
 
int main() 
{	
	int dp[1000001];
	dp[1]=2;
	for(int i=2; i<1000001; i++)
	dp[i]=(dp[i-1] + (i-1) + (2*i)) % mod;
	
	long long int t; cin>>t;
	for(int i=1; i<=t; i++)
	{
		int64_t n;
		cin>>n;
		cout<<dp[n]<<endl;
	}
    return 0;
}