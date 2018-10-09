#include<bits/stdc++.h>
using namespace std;
 
void dfs(int s, bool v[], int c[], vector<int>adj[], bool &ans)
{
	if(v[s]) return;
	v[s]=true;
	for(auto u:adj[s]) 
	{
		if(v[u] && c[u]==c[s]) ans=false;
		c[u]=1-c[s];
		dfs(u,v,c,adj,ans);
	}
}
 
int main()
{
	int t; cin>>t;
	int i=1;
	while(t--)
	{
		int n,m; cin>>n>>m;
		vector<int>adj[n+1];
		for(int i=1; i<=m; i++)
		{
			int x,y; cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		bool v[n+1]; memset(v,false,sizeof v);
		int c[n+1]; 
		bool ans=true;
		for(int i=1; i<=n; i++)
		{
			if(!v[i])
			{
				c[i]=0;
				dfs(i,v,c,adj,ans);
			}
		}
		cout<<"Scenario #"<<i<<":\n";
		if(ans) cout<<"No suspicious bugs found!\n";
		else cout<<"Suspicious bugs found!\n";
		i++;
	}
	return 0;
}