#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t; cin>>t;
	while(t--)
	{
		int n,x; long long int sum=0;
		cin>>n>>x; int a[n+1]; a[0]=0;
		for(int i=1; i<=n; i++) cin>>a[i];
		
		for(int i=2; i<=n; i++) a[i]+=a[i-1];
				
		int l=0,r=0,al=0,ar=0,ans=0;
		while(l<=r && r<=n)
		{
			sum=a[r]-a[l];
			if(sum<=x)
			{
				if(ans<r-l || (ans==r-l && a[ar]-a[al]>sum)) { al=l; ar=r; ans=r-l; }
			}
			if(sum<x) r++;
			if(sum>x) l++;
			if(sum==x) l++;
		}
		cout<<a[ar]-a[al]<<" "<<ans<<endl;
	}
	return 0;
}
