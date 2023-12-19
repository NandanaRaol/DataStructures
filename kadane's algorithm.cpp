#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int ans=0,sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
		ans=max(sum,ans);
		if(sum<0)
		{
			sum=0;
		}
	}
	cout<<ans<<endl;
}
