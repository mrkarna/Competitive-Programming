#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int id = 1;
	while(1)
	{
		string s; cin>>s;
		if(s[0]=='-') break;
		
		stack<int> st;
		
		int ans=0, t=0;
		
		for(size_t i=0; i<s.size(); i++)
		{
            if(st.empty() && s[i]=='}') { ans++; s[i]='{'; }
			if(s[i]=='{') st.push(s[i]);
			else
			{
				if(!st.empty()) st.pop();
                else t++;
			}
		}
		
		cout<<id<<". "<<st.size()/2 + ans + t/2<<endl;
        id++;
	}
	
	return 0;
}
