#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    while(1)
    {
        int a, b, c;
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0) break;
        int d1=b-a; int d2=c-b;
        if(d1==d2) cout<<"AP "<<c+(b-a)<<endl;
        else cout<<"GP "<<c*b/a<<endl;
    }
    return 0;
}
