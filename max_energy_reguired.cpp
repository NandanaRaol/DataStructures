/*
You are given an array heights of n elements whose ith element denotes the height of the ith building.
 Geek likes to jump from one building to another. He only jumps to the next taller building and stops 
 when he reaches the tallest building.
The energy required for this journey is XOR of all the heights of the buildings on which Geek jumps until he stops.
 Geek can start his journey from any building. Find the maximum energy required before he starts. 

Example 1:

Input:
n = 5
heights[] = {3, 1, 4, 5, 6}
Output: 7
Explanation:
If he starts from building 1, 
required energy = 3 ^ 4 ^ 5 ^ 6 = 4.
If he starts from building 2, 
required energy = 1 ^ 4 ^ 5 ^ 6 = 6.
If he starts from building 3, 
required energy = 4 ^ 5 ^ 6 = 7.
If he starts from building 4, 
required energy = 5 ^ 6 = 3.
If he starts from building 5, 
required energy = 6 

The maximum energy required is 7, in the case 
where he starts jumping from building 3.

Example 2:

Input:
n = 2
heights[] = {4, 4}
Output: 4
*/
#include<iostream>
using namespace std;
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
	int i,j,m=-1,x=0,k=0;
	for(i=0;i<n;i++)
	{
	  x=a[i];
	  for(j=i+1;j<n;j++)
		{
			if(a[j]>a[i]) 
			{
				x^=a[j];
				i=j;
			}
		}
		if(x>m )
			m=x;
		k++;
		i=k;	
	}
	cout<<"\n maximum energy required is:"<<m;
}
