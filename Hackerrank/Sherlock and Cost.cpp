#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		int b[n];
		for(int i=0; i<n; i++) cin>>b[i];
		
		long dp[n][2];
		dp[0][0]=0;
		dp[1][0]=0;
		//cout<<dp[1][0]<<endl;
		for(int i=1; i<n; i++)
		{
			dp[0][i]=max(dp[0][i-1], dp[1][i-1]+abs(b[i-1]-1));
			dp[1][i]=max(dp[0][i-1]+abs(b[i]-1), dp[1][i-1]+abs(b[i]-b[i-1]));
		}
		cout<<max(dp[0][n-1], dp[1][n-1])<<endl;
		//for(int i=0; i<n; i++) cout<<dp[0][i]<<" "; cout<<endl;
		//for(int i=0; i<n; i++) cout<<dp[1][i]<<" ";
	}
	return 0;
}

