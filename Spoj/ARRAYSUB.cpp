#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   	int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    
    int k; cin>>k;
    
    int max=INT_MIN;
    for(int i=0; i<k; i++)
        if(max<a[i]) max=a[i];
    
    cout<<max<<" ";
    
    for(int i=1; i<=n-k; i++)
    {
        if(a[i-1]!=max && max>=a[i+k-1]) cout<<max<<" ";
        else
        {
            int tempmax=INT_MIN;
            for(int j=i; j<=i+k-1; j++) 
                if(tempmax<a[j]) tempmax=a[j];
            cout<<tempmax<<" ";
            max=tempmax;
        }
    }
	return 0;
}
