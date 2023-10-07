/*You are given an array consisting of n
 integers. Your task is to determine whether it is possible to color all
  its elements in two colors in such a way that the sums of the elements of both 
  colors have the same parity and each color has at least one element colored.

For example, if the array is [1,2,4,3,2,3,5,4
], we can color it as follows: [1,2,4,3,2,3,5,4
], where the sum of the blue elements is 6
 and the sum of the red elements is 18
 
Output
For each test case, output "YES" (without quotes) if it is possible 
to color the array in two colors in such a way that the sums of the elements of
 both colors have the same parity and each color has at least one element colored, and "NO" otherwise.

You can output "Yes" and "No" in any case (for example, the strings "yES", "yes", and "Yes"
 will be recognized as correct answers).

Sample 1
Inputcopy	Outputcopy
7
8
1 2 4 3 2 3 5 4
2
4 7
3
3 9 8
2
1 7
5
5 4 3 2 1
4
4 3 4 5
2
50 48
YES
NO
YES
YES
NO
YES
YES
Note
The first sample is described in the statement.

In the second sample, there are only two colorings [4,7]
 and [4,7]
 , but in both cases the parity of sums is different.

In the third sample, you can color [3,9,8]
 and 12
 and 8
 are both even.*/
#include<bits/stdc++.h>
using namespace std;
//METHOD:There should be even number of odd numbers:(e+e=e,e+o=o,o+o=e,o+o+o=o)
int main()
{
	int n;
	cout<<"\n enter the array size:";
	cin>>n;
	cout<<"\n enter array elements:";
	int x,c=0;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x%2==1)
		{
			c++;
		}
	}
	if(c%2==0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
