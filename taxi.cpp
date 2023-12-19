#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
    int dp[5];
    int a[n];
    for(int i=0;i<5;i++)
    {
    	dp[i]=0;
	}
	 for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	dp[a[i]]++;
	}
	int p=dp[2];
	int q=dp[2]/2;
	int ans=dp[4]+dp[3]+(dp[2]/2);
	dp[1]=dp[1]-dp[3];
    if(dp[2]%2==1)
    {
      	dp[1]=dp[1]-2;
      	ans=ans+1;
   	if(dp[1]%4==0 && dp[1]>0)
		{
			ans=ans+(dp[1]/4);
		}
		else if(dp[1]>0)
		{
			ans=ans+(dp[1]/4)+1;
		}
	}
	else
	{
		if(dp[1]%4==0 && dp[1]>0)
		{
			ans=ans+(dp[1]/4);
		}
		else if(dp[1]>0)
		{
			ans=ans+(dp[1]/4)+1;
		}
	}
	cout<<ans<<endl;
}
