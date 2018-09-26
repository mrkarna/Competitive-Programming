#include <iostream>
using namespace std;
 
int rev(int p)
{
	int rev=0;
	while(p>0)
	{
		rev=rev*10 + p%10;
		p/=10;
	}
	return rev;
}
 
int main() {
	
	// your code here
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
    	unsigned long int x, y;
    	cin>>x>>y;
    	x=rev(x); y=rev(y); 
    	unsigned long int z=x+y;
    	z=rev(z);
        cout<<z<<endl;
    }
	return 0;
} 
