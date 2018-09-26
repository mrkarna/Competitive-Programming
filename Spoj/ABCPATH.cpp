#include<bits/stdc++.h>
using namespace std;
 
int n,m,cnt=0;
char ch;
struct pt { int x,y; };
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
 
bool in(int x, int y)
{
	if(x>=0 && x<n && y>=0 && y<m) return true;
	return false;
}
 
int main()
{
	while(1)
	{
		cnt++;
		queue<pt>q;
		cin>>n>>m;
		int a[n][m];
		bool v[n][m]; memset(v,false,sizeof v);
		if(n==0 && m==0) break;
		for(int i=0; i<n; i++) 
		for(int j=0; j<m; j++) { cin>>ch; a[i][j]=ch-'A'; if(a[i][j]==0) {q.push({i,j}); v[i][j]=true;} }
		
		while(!q.empty())
		{
			pt f; f=q.front(); q.pop();
			int xx=f.x; int yy=f.y;
			for(int i=0; i<8; i++)
			if(in(xx+dx[i],yy+dy[i]) && !v[xx+dx[i]][yy+dy[i]] && a[xx+dx[i]][yy+dy[i]]==1+a[xx][yy])
			{
					v[xx+dx[i]][yy+dy[i]]=true;
					q.push({xx+dx[i],yy+dy[i]});
			}
		}
		
		int ans=-1;
		for(int i=0; i<n; i++)
		for(int j=0; j<m; j++) 
		if(v[i][j]) ans=max(ans,a[i][j]);
		
		cout<<"Case "<<cnt<<": "<<ans+1<<'\n';
	}
	return 0;
}
