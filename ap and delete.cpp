#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int k=s.size();
		int s0=0,s1=0;
		for(int i=0;i<k;i++)
		{
			if(s[i]=='0')
			{
				s0++;
			}
			else
			{
				s1++;
			}
		}
		if(k==1)
		{
			cout<<1<<endl;
		}
		else if(s0==0 || s1==0)
		{
			cout<<k<<endl;
		}
		else if(s0==s1)
		{
			cout<<0<<endl;
		}
	    else
	    {
	    	int ans=0;
	      while(s0>=0 && s1>=0)
	      {
	      	 if(s[ans]=='0')
	      	 {
	      	 	s1--;
			 }
			else
			  {
			  	 s0--;
			  }
			  ans++;
		  }
		  cout<<k-ans+1<<endl;
		}
		
	}
}
