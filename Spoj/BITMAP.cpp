#include<bits/stdc++.h>
using namespace std;
 
int n, m;
 
bool check(int a, int b)
{
	if(a>=0 && a<n && b>=0 && b<m) return true;
	return false;
}
 
int main()
{
	int t; cin>>t;
	for(int it=0; it<t; it++)
	{
		cin>>n>>m;
		string s[n];
        int a[n][m];
		int v[n][m];
		int d[n][m];
		queue<pair<int, int> >q;
		
		for(int i=0; i<n; i++) cin>>s[i];
      
        for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            if(s[i][j]=='1')
            {
                a[i][j]=1;
				d[i][j]=0;
				v[i][j]=1;
				q.push({i,j});
			}
            else 
            {
                a[i][j]=0;
                v[i][j]=0;
            }
        }
                		
		while(!q.empty())
		{
			int x=q.front().first; int y=q.front().second;
			q.pop();
			if(check(x+1,y) && !v[x+1][y] && a[x+1][y]==0)
			{
				v[x+1][y]=1;
				d[x+1][y]=1+d[x][y];
				q.push({x+1,y});
			}
			if(check(x,y+1) && !v[x][y+1] && a[x][y+1]==0)
			{
				v[x][y+1]=1;
				d[x][y+1]=1+d[x][y];
				q.push({x,y+1});
			}
			if(check(x-1,y) && !v[x-1][y] && a[x-1][y]==0)
			{
				v[x-1][y]=1;
				d[x-1][y]=1+d[x][y];
				q.push({x-1,y});
			}
			if(check(x,y-1) && !v[x][y-1] && a[x][y-1]==0)
			{
				v[x][y-1]=1;
				d[x][y-1]=1+d[x][y];
				q.push({x,y-1});
			}
		}
		
	for(int i=0; i<n; i++) {
	for(int j=0; j<m; j++)
	cout<<d[i][j]<<" ";
	cout<<endl; }
	
	}
			
	return 0;
}	