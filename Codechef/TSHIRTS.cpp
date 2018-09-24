#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define ll long long
#define rep(i,n) for(int i=0; i<n; i++)
#define INF 1000000000000
const ll mod=1e9+7;
vector<ll>v[11];
ll dp[101][1024];
ll n; 
string s; 

void initialise()
{
	memset(dp, -1, sizeof dp);
	rep(i,11) v[i].clear();
}

bool contains(int j, int i)
{
	bool ans=false;
	for(auto u:v[j]) if(u==i) ans=true;
	return ans;
}

ll solve(ll i, ll mask)
{
	if(mask==((1<<n)-1)) return 1;
	if(i>100) return 0;
	if(dp[i][mask]!=-1) return dp[i][mask];
	ll ways=solve(i+1,mask);
	ways%=mod;
	for(ll j=0; j<n; j++)
	{
		if(mask&(1<<j)) continue;
		if(!contains(j,i)) continue;
		ways+=(solve(i+1,mask|(1<<j)))%mod;
	}
	return dp[i][mask]=ways%mod;
}

int main()
{
	ll t; cin>>t;
	while(t--)
	{
		cin>>n; getline(cin,s);
		initialise();
		rep(i,n)
		{
			getline(cin,s); 
			rep(j,int(s.size()))
			if(s[j]!=' ')
			{
				ll x=s[j]-'0';
				ll k=1; 
				while(j+k<int(s.size()) && s[j+k]!=' ') { x=x*10+(s[j+k]-'0'); k++; }
				j=j+k;
				v[i].push_back(x);
			}
		}
		cout<<solve(0,0)<<endl;
	}	
	return 0;
}

