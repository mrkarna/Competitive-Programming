#include<bits/stdc++.h>
using namespace std;
 
bool mycmp1(pair< int, pair<int, int>> p1, pair< int, pair<int, int>> p2)
{
    if(p1.second.first > p2.second.first) return true;
    if(p1.second.first < p2.second.first) return false;
    else return p1.second.second > p2.second.second;
}
 
bool mycmp2(pair< int, pair<int, int>> p1, pair< int, pair<int, int>> p2)
{
    if(p1.second.second > p2.second.second) return true;
    if(p1.second.second < p2.second.second) return false;
    else return p1.second.first > p2.second.first;
}
 
int main()
{
    int t; cin>>t;
    for(int it=0; it<t; it++)
    {
        int n; cin>>n; 
        vector<pair< int, pair<int, int>> > v;
        for(int i=1; i<=n; i++)
        {
            int x, y; cin>>x>>y;
            v.push_back({i, {x,y}});
        }
        
        sort(v.begin(), v.end(), mycmp1);
        int irmax=v[0].second.first;
        sort(v.begin()+1, v.end(), mycmp2);
        int ormax=v[1].second.second;
        
        if(ormax<irmax) cout<<v[0].first<<endl;
        else cout<<"-1"<<endl;
    }
    
    return 0;
} 