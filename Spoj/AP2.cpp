#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t; cin>>t;
	for(int it=0; it<t; it++)
	{
		int64_t a, b, c;
		cin>>a>>b>>c;
		int64_t n=2*c/(a+b);
		int64_t d=(b-a)/(n-5);
		int64_t a0=a-(2*d);
		cout<<n<<endl;
		for(int64_t i=0; i<n; i++) 
		cout<<a0+(i*d)<<" ";
		cout<<endl;
	}
	
	return 0;
}
