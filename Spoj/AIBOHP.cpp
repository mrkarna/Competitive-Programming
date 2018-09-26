#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t; cin>>t;
	for(int it=0; it<t; it++)
	{
		string s;
		cin>>s;
		int n=s.size();
		
		int dp[n][n];
		
		for(int i=0; i<n; i++)
		for(int j=0; j<=i; j++) dp[i][j]=0;
		
		for(int i=0; i<n-1; i++)
		{
			int row=0;
			int col=i+1;
			while(row<n && col<n && row>=0 && col>=0)
			{
				if(s[row]==s[col]) dp[row][col]=dp[row+1][col-1];
				else dp[row][col]=min(dp[row][col-1], dp[row+1][col]) + 1;
				row++;
				col++;
			}
		}
	
		cout<<dp[0][n-1]<<endl;
			
	}
	
	return 0;
}
