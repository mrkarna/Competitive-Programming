//---------------------------------------------GSS1 SPOJ ACCEPTED-------------------

#include<bits/stdc++.h>
using namespace std;
 
struct node
{
	long long int pfs,sfs,mxsum,sum;
};
 
node tree[1000000];
int a[100000];
int n,l,r;
 
node merge(node l, node r)
{
	if(l.pfs==INT_MIN) return r;
	if(r.pfs==INT_MIN) return l;
	node ans;
	ans.sum=l.sum+r.sum;
	ans.pfs=max(l.pfs, l.sum+r.pfs);
	ans.sfs=max(r.sfs, r.sum+l.sfs);
	ans.mxsum=max(ans.pfs, max(ans.sfs, max(l.mxsum, max(r.mxsum,l.sfs+r.pfs))));
	return ans;
}
 
void build(int i, int s, int e)
{
	if(s==e)
	{
		tree[i].pfs=a[s]; tree[i].sfs=a[s]; tree[i].mxsum=a[s]; tree[i].sum=a[s];
		return;
	}
	int m=(s+e)/2;
	build(i*2,s,m);
	build(i*2+1,m+1,e);
	tree[i]=merge(tree[i*2], tree[i*2+1]);
}
 
node query(int i, int s, int e, int qs, int qe)
{
	if(e<qs || s>qe)
	{
		node mini;
		mini.pfs=INT_MIN; mini.sfs=INT_MIN;  mini.mxsum=INT_MIN; mini.sum=INT_MIN;
		return mini;
	}
	if(s>=qs && e<=qe) return tree[i];
	int m=(s+e)/2;
	node l=query(i*2,s,m,qs,qe);
	node r=query(i*2+1,m+1,e,qs,qe);
	node ans=merge(l,r);
	return ans;
}
	
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i];
	build(1,1,n);
	int m; cin>>m;
	while(m--)
	{
		cin>>l>>r;
		node x;
		x=query(1,1,n,l,r);
		cout<<x.mxsum<<endl;
	}
	return 0;
}
