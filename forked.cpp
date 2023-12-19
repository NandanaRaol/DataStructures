#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,xk,yk,xq,yq;
		cin>>a>>b>>xk>>yk>>xq>>yq;
		vector<pair<long long int,long long int> > v1;
		vector<pair<long long int,long long int> > v2;
		v1.push_back({xk-a,yk-b});
		v1.push_back({xk-a,yk+b});
		v1.push_back({xk+a,yk-b});
		v1.push_back({xk+a,yk+b});
		v1.push_back({xk-b,yk-a});
		v1.push_back({xk+b,yk-a});
		v1.push_back({xk+b,yk+a});
		v1.push_back({xk-b,yk+a});
		v2.push_back({xq-a,yq-b});
		v2.push_back({xq-a,yq+b});
		v2.push_back({xq+a,yq-b});
		v2.push_back({xq+a,yq+b});
		v2.push_back({xq+b,yq-a});
		v2.push_back({xq-b,yq+a});
		v2.push_back({xq+b,yq+a});
		v2.push_back({xq-b,yq-a});
	  // long long int s=0;
	  set<pair<int,int> >s;
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				if(v1[i]==v2[j])
				{
					s.insert(v1[i]);
				}
			}
		}
		cout<<s.size()<<endl;
	}
}
