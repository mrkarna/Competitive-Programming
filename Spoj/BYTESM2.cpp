#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t; cin>>t;
    for(int it=0; it<t; it++)
    {
        int n, m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++) cin>>a[i][j];
        
        if(m==1)
         {
            int temp=0;
            for(int i=0; i<n; i++) temp+=a[i][0];
           cout<<temp<<endl;
        }
        else
       {
        int ans[n][m];
        for(int j=0; j<m; j++) ans[0][j]=a[0][j];
        
        for(int i=1; i<n; i++)
            for(int j=0; j<m; j++)
            {
                if(j==0) ans[i][j]=a[i][j]+max(ans[i-1][j], ans[i-1][j+1]);
                if(j==m-1) ans[i][j]=a[i][j]+max(ans[i-1][j], ans[i-1][j-1]);
                if(j!=0 && j!=m-1) ans[i][j]=a[i][j]+max(ans[i-1][j], max(ans[i-1][j-1], ans[i-1][j+1]));
            }
         
         int max=ans[n-1][0];
         for(int i=0; i<m; i++)
                if(ans[n-1][i]>max) max=ans[n-1][i];
        cout<<max<<endl;
      }
    }
    return 0;
}