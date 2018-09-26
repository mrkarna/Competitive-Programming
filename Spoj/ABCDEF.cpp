#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n; cin>>n;
	long long int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	
	vector<long long int> v1, v2;
	for(int i=0; i<n; i++)
	for(int j=0; j<n; j++) 
	for(int k=0; k<n; k++) v1.push_back(a[i]*a[j] + a[k]);
	
	for(int i=0; i<n; i++)
	for(int j=0; j<n; j++)
	for(int k=0; k<n; k++) if(a[k]!=0) v2.push_back(((a[i]+a[j])*a[k]));
	
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	
	pair< vector<long long int>::iterator, vector<long long int>::iterator> bounds;
	long long int ans=0;
	
	for(int i=0; i<n*n*n; i++)
	{
		bounds = equal_range(v2.begin(), v2.end(), v1[i]);
		ans+= (bounds.second - bounds.first );
	}
 
	cout<<ans;
	
	return 0;
}
