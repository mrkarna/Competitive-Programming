#include<bits/stdc++.h>
using namespace std;
 
map<long,long> m;
 
long int fun(long int n)
{
    if(n==0) return 0;
    if(m[n]!=0) return m[n];
    else return m[n]=max(n, fun(n/2)+fun(n/3)+fun(n/4));
}
 
int main()
{
    long int n; 
    while(cin>>n)
    {
        long int ans=fun(n);
        cout<<ans<<endl;
    }
}