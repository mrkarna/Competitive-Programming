#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	for(int it=0; it<t; it++)
	{
		long long int n, c;
		cin>>n>>c;
		long long int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		
		sort(a, a+n);
		
		long long int l=0, r=a[n-1]-a[0]+1;
		long long int mid;
		
		while(l<r)
		{
			mid=l+(r-l+1)/2;
			long long int placed=1;
			long long int prev=a[0];
			for(int i=1; i<n; i++)
			{
				if(a[i]-prev>=mid)
				{
					prev=a[i];
					placed++;
				}
			}
			
			if(placed>=c) l=mid;
			else r=mid-1;
		}
		
		cout<<l<<endl;
	}
	
	return 0;
}

