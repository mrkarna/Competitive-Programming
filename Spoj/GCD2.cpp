#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin>>t;
	for(int it=0; it<t; it++)
	{
		int m; string s;
		cin>>m;
        cin>>s;
		int n=s.size();
		int a=0;
		if(m==0)
		{
			for(int i=0; i<n; i++) cout<<s[i];
			cout<<endl;
		}
		else
		{
		 for(int i=0; i<n; i++)  a=((a*10)+(s[i]-'0'))%m;
		 cout<<__gcd(m, a)<<endl;
		}
	}
	
	return 0;
}
