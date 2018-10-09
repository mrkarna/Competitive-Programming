#include <iostream>
#include <cstdio>
#include <stack>
 
#define ll long long
 
using namespace std;
 
int main(){
    int t, c = 1;
    char ch;
    scanf("%d",&t);
    while (t--) {
        printf("Case %d:\n",c);
        ll n, max = 0, ip;
        stack<ll> mango;
        scanf("%lld",&n);
        
        while (n--) {
            scanf(" %c",&ch);
            switch (ch) {
                case 'A':
                    scanf("%lld",&ip);
                    if (ip > max)
                        max = ip;
                    mango.push(max);
                    break;
                    
                case 'Q':
                    if (mango.empty())
                      {max=0;
                      printf("Empty\n");}
                    else
                        printf("%lld\n",mango.top());
                    break;
                    
                case 'R':
                    if (!mango.empty())
                       { mango.pop();
                       	if (!mango.empty())
                       		{
                       			if(mango.top() < max)
                       				max = mango.top();
                       		}
                       		else max = 0;
                       }
                       break;
                default:
                    break;
            }
        }
        c++;
    }
    return 0;
} 