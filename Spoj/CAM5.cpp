#include<bits/stdc++.h>
using namespace std;
 
void dfs(int s, int visited[], vector<int> adj[])
{
	if(visited[s]) return;
	visited[s]=1;
	for( auto u: adj[s]) dfs(u, visited, adj);
}
 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t; cin>>t;
	for(int it=0; it<t; it++)
	{
		int n, e;
		cin>>n>>e;
		vector<int> adj[n];
		for(int i=0; i<e; i++)
		{
			int x, y;
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		
		int visited[n]={0};
		int counts=0;
		
		for(int i=0; i<n; i++)
		if(!visited[i])
		{
			counts++;
			dfs(i, visited, adj);
		}
		
		cout<<counts<<endl;
	}
		return 0;
}