#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin>>t; 
    for(int it=0; it<t; it++)
    {
        int n, k; cin>>n>>k;
        int64_t h[n];
        for(int i=0; i<n; i++) cin>>h[i];
        
        sort(h, h+n, greater<int>());
        
        int64_t ans=INT_MAX;
        
        for(int i=0; i<n-k+1; i++)
        {
            int64_t temp=h[i]-h[i+k-1] ;
            ans=min(ans,temp);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
