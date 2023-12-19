#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,ans=-2e18,sum;
		long long int a[n];
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		ans=a[0];
		if(a[0]<0)
		{
			sum=0;
		}
		else
		{
			sum=a[0];
		}
		for(int i=1;i<n;i++)
		{
			if(abs(a[i-1]%2)==abs(a[i]%2))
			{
				sum=0;
			}
			sum=sum+a[i];
			ans=max(ans,sum);
			if(sum<0)
			{
				sum=0;
			}
		}
		cout<<ans<<endl;
	}
}
