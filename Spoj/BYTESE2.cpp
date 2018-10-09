#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t; cin>>t; 
	for(int it=0; it<t; it++)
	{
        vector<pair<int, char> >v;
		int n; cin>>n;
		for(int i=0; i<n; i++)
		{
			int l, r;
			cin>>l>>r;
			v.push_back({l,'l'});
			v.push_back({r,'r'});
		}
		int ans=-1;
        int counter=0;
		sort(v.begin(), v.end());
        for(int i=0; i<v.size(); i++) 
        {
            if(v[i].second=='l') counter++;
            if(v[i].second=='r') counter--;
            ans=max(ans, counter );
        }
        cout<<ans<<endl;
	}
	
	return 0;
}