#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int k=0;
		int k1=int(log10(n)+1);
		for(int i=k1/2;i<k1;i++)
		{
		  
		  int p=pow(10,i);
		  int s1=n/p;
		  int s2=n%p;
		  int k2=int(log10(s1)+1);
		  int k3=int(log10(s2)+1);
		  if(s2>s1 && (k2+k3==k1))
		  {
		  	cout<<s1<<" "<<s2<<endl;
		  	k=1;
		  	break;
		  }
		}
		if(k==0)
		{
			cout<<-1<<endl;
		}
	}
}
