#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    while(1)
    {
		string s;
		cin>>s;
		string zero="0";
		if(s.compare(zero)==0) break;
		
		int64_t n=s.size();
		
		int64_t dp[n], ans=-1;
		
		dp[0]=1;
	        
        for(int i=1; i<n; i++)
            if((s[i]-'0')==0 && (s[i-1]-'0')==0) ans=0;
        
        if(n>1)                                 
	   {
		if((s[1]-'0')!=0) { if(((s[0]-'0')*10 + (s[1]-'0'))<=26) dp[1]=2; else dp[1]=1; }
		if((s[1]-'0')==0) { if((s[0]-'0')<3) dp[1]=1; else ans=0; }
                 		
		for(int64_t i=2; i<n; i++)
		{
			if((s[i]-'0')==0)
			{
				if((s[i-1]-'0')<3) dp[i] = dp[i-2];
				else ans=0;
			}
			else
			{
				int64_t no=(s[i-1]-'0')*10 + (s[i]-'0');
				if(no<=26 && (s[i-1]-'0')!=0) dp[i]=dp[i-1]+dp[i-2];
                else dp[i]=dp[i-1];                
		    }
		}
	   }
		if(ans!=-1) cout<<ans<<endl;
		/*else 
        {
            for(int i=0; i<n; i++) cout<<"#"<<dp[i]<<endl;
        }*/
        else cout<<dp[n-1]<<endl;
	}
	return 0;
}
