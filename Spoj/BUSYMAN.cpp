#include<bits/stdc++.h>
using namespace std;
 
bool mycmp( pair<int, int> p1, pair<int, int> p2)
{
	return p1.second<p2.second;
}
 
int main()
{
    int t; cin>>t;
    for(int it=0; it<t; it++)
	{
		int n; cin>>n;
		if(n==-1) break;
		vector<pair<int,int> >v(n);
		for(int i=0; i<n; i++)
		cin>>v[i].first>>v[i].second;
		
		sort(v.begin(), v.end(), mycmp);
		
		int ans=0;
		int last=-1;
		for(int i=0; i<n; i++) 
		if(v[i].first >= last)
		{
			ans++;
			last = v[i].second;
		}
		
		cout<<ans<<endl;
	}
	
	return 0;
}