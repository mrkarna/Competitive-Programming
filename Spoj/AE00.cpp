#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; cin>>n;
    int64_t ans=0;
    ans+=n;
    for(int i=2; i<=n; i++)
    {
		if(i*i<=n)
		{
		 int temp=n/i;
		 ans+=temp-i+1;
	    }
	    if(i*i>n) break;
	}
	cout<<ans;
    return 0;
}
