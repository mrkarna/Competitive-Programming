#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
	
	int t; scanf("%d",&t);
	for(int it=0; it<t; it++)
	{
	 int n, m;
	 scanf("%d",&n);
	 scanf("%d",&m);
	 
	 if(n==1 || m==1) printf("1 \n");
	 else
	 {
		 int ans=0;
		 int hcf=__gcd(n,m);
		 
		 for(int i=2; i<=hcf; i++)
		 if(n%i==0 && m%i==0) ans++;
		 
		 printf("%d\n",ans+1);
	 }
    }
 
	return 0;
}