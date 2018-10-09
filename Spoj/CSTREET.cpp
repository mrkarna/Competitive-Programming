#include<bits/stdc++.h>
using namespace std;
 
const int maxm = 300001;
int n, m;
int id[maxm];
pair< long long int, pair<int, int> > p[maxm];
 
void initialise()
{
	for(int i=0; i<maxm; i++) id[i]=i;
}
 
int root(int x)
{
	while(id[x]!=x)
	{
		id[x]=id[id[x]];
		x=id[x];
	}
	return x;
}
 
void union1(int x, int y)
{
	int p = root(x);
	int q = root(y);
 
	id[p]=id[q];
}
 
long long int kruskal(pair<long long int, pair<int, int> > p[])
{
	int x, y;
	long long int cost, mincost=0;
 
	for(int i=0; i<m; i++)
	{
		x=p[i].second.first;
		y=p[i].second.second;
		cost=p[i].first;
 
		if(root(x)!=root(y))
		{
			mincost+=cost;
			union1(x,y);
		}
	}
	return mincost;
}
int main()
{   
    int t; cin>>t; 
    for(int it=0; it<t; it++)
   {
    initialise();
    long long int price; cin>>price;
	cin>>n>>m;
	for(int i=0; i<m; i++)
	{
		int a, b, c;
		cin>>a>>b>>c;
		p[i]={c, {a,b}};
	}
 
	sort(p, p+m);
 
	cout<<price * kruskal(p)<<endl;
   }
 
	return 0;
}