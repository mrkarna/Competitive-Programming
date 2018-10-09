#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    
	int t; cin>>t;
	for(int it=0; it<t; it++)
	{
	int n, k; cin>>n>>k;
	int a[n];
	int64_t hi=0; int lo=-1;
	for(int i=0; i<n; i++) { cin>>a[i]; hi+=a[i]; lo=max(lo, a[i]); }
		
	while(lo<hi)
	{
		int mid=lo+(hi-lo)/2;
		int workassigned=0;
		int req=1;
		for(int i=0; i<n; i++)
		{
			if(workassigned+a[i] <= mid) workassigned+=a[i];
			else
			{
				req++;
				workassigned=a[i];
			}
		}
		if(req<=k) hi=mid;
		else lo=mid+1;
	}
	
	int64_t sum=0;
	vector <int64_t > v;
	int cnt = 1;
	for(int i=n-1;i>-1;i--)
	{
		if(sum+a[i] > lo || i == k-cnt-1)
		{
			sum=0;
			v.push_back(-1);
			cnt++;
		}
		sum+=a[i];
		v.push_back(a[i]);
	}
	reverse(v.begin(),v.end());
	int l = v.size();
	for(int i=0;i<l;i++)
	{
		if(v[i] == -1 )
			printf("/ ");
		else
			cout << v[i] << " ";
	}
	cout << endl;
	}
	
	return 0;
}