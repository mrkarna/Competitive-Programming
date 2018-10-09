#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t; cin>>t;
	for(int i=0; i<t; i++)
	{
		string s;
		getline(cin, s);
		unsigned long long int n; cin>>n;
		unsigned long long int total=0;
		for(unsigned long long int j=0; j<n; j++)
		{
			unsigned long long int temp; cin>>temp;
			total+=(temp%n);
		}
		if(total%n==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}