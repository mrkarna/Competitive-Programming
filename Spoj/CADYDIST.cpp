#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
	while(1)
  {
	int n;
	cin>>n;
	if(n==0) break;
	
	vector<int64_t>a;
	vector<int64_t>b;
	for(int i=0; i<n; i++) { int64_t temp; cin>>temp; a.push_back(temp); }
	for(int i=0; i<n; i++) { int64_t temp; cin>>temp; b.push_back(temp); }
	
	sort(a.begin(), a.end(), greater<int>());
	sort(b.begin(), b.end());
	
	int64_t ans=0;
	for(int i=0; i<n; i++) ans+=a[i]*b[i];
	
	cout<<ans<<endl;
   }
	
	return 0;
}