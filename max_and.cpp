/*QUESTION:
given an array of elements,you can pick up at most one element of the array
and increment or decrement it by any value.The task is to maximize the AND of the resulting array
AND(&)
EXAMPLE:
N=3
A[]={1,2,3}
OUTPUT:2
*/
#include<bits/stdc++.h>
using namespace std;
/*LOGIC:
    To maximise the AND we need to make any one number as all 1's.
     11&10&01=10&01 it means that we need to find all possible AND's value excluding one number.*/
int maxAnd(int n, int a[])
    {
      int p[n],s[n];
      p[0]=a[0];
      for(int i=1;i<n;i++)
      {
          p[i]=p[i-1]&a[i];
      }
      s[n-1]=a[n-1];
      for(int i=n-2;i>=0;i--)
      {
          s[i]=s[i+1]&a[i];
      }
      int ans=max(p[n-2],s[1]);
      for(int i=1;i<n-1;i++)
      {
        ans=max(ans,p[i-1]&s[i+1]);       
      }
      cout<<"\n maximum bitwise and possible is:"<<ans<<" ";
      return ans;
     }
 int main()    
 {
 	int n;
 	cout<<"\n enter array size:";
 	cin>>n;
 	int a[n];
 	cout<<"\n enter array elements:";
 	for(int i=0;i<n;i++)
 	{
 		cin>>a[i];
	}
	 maxAnd(n,a);
 }
