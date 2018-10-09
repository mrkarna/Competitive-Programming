#include<bits/stdc++.h>
using namespace std;
 
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define ll long long
#define rep(i,n) for(int i=0; i<n; i++)
#define INF 1000000000000
const ll mod=1e9+7;
 
int main()
{
	while(1)
	{	
		string s1, s2; 
		cin>>s1; if(s1.size()==0) break; 
		cin>>s2; 
		ll cnt1[26], cnt2[26]; memset(cnt1,0,sizeof cnt1); memset(cnt2,0,sizeof cnt2);
		//cin>>s2;
		rep(i,int(s1.size())) cnt1[s1[i]-'a']++; //for(auto u:cnt1) cout<<u<<" "; cout<<endl;
		rep(i,int(s2.size())) cnt2[s2[i]-'a']++; //for(auto u:cnt2) cout<<u<<" "; cout<<endl;
		rep(i,26) cnt1[i]=min(cnt1[i],cnt2[i]);  //for(auto u:cnt1) cout<<u<<" "; cout<<endl;
		rep(i,26) if(cnt1[i]) { for(ll j=0; j<cnt1[i]; j++) cout<<char('a'+i); }
		cout<<endl;
	}
	return 0;
}