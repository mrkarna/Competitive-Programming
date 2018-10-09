#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	while(1)
	{
		int x; cin>>x;
		if(x==-1) break;
		int a[x];
		int sum=0; int ans=0;
		for(int i=0; i<x; i++) 
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%x!=0) cout<<"-1"<<endl;
		else
		{
			int candy=sum/x;
			for(int i=0; i<x; i++)
			if(a[i]<candy) ans+=(candy-a[i]);
			cout<<ans<<endl;
		}
	}
		
	return 0;
}