#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    
	while(1)
	{
	int n, k; cin>>n>>k;
	if(n==-1 && k==-1) break;
	int a[n];
	int hi=-1; int lo=0;
	for(int i=0; i<n; i++) { cin>>a[i]; hi=max(hi, a[i]);}
		
	while(lo<hi)
	{
		int mid=lo+(hi-lo)/2;
		int req=0;
		for(int i=0; i<n; i++)
		{
			req+=(ceil(float(a[i])/mid));
		}
		if(req<=k) hi=mid;
		else lo=mid+1;
	}
	cout<<lo<<endl;
	}
	
	return 0;
}