#include<bits/stdc++.h>
using namespace std;
/*B. JOGI's Algorithm
time limit per test1 s.
memory limit per test256 MB
inputstandard input
outputstandard output
During an interview, Famous Mathematician Bhupendra
 Jogi
 is given an array a
 of length n
 and an integer x
.


He developed a complex yet interesting algorithm: he iterates over the 
elements of the array, let the current element be q
. If q
 is divisible by x
, then he will add x
 copies of the integer qx
 to the end of the array, and moves on to the next element. Note that the newly
  added elements could be processed by him later. Otherwise, if q
 is not divisible by x
, he will stop everything, and head off to rest at his California Penthouse.
Please determine the sum of all values of the array at the end of the process.

Input
The first input line contains a single integer t
 (1=t=100
) — the number of test cases.

The first line of each test case contains two integers n
 and x
 (1=n=105
, 2=x=109
) — the length of the array and the value which is used by the "JOGI".

The next line contains integers a1
, a2
, ..., an
 (1=ai=109
) — the initial values in the array.

It is guaranteed that the sum of values n
 over all test cases does not exceed 105
.

Output
For each test case output one integer — the sum of all elements at the end of the process.

Example
inputCopy
2
1 2
12
4 2
4 6 8 2
outputCopy
36
44
Note
In the first test case the array initially consists of a single element [12]
, and x=2
. After he processes the first element, the array becomes [12,6,6]
. Then he will processes the second element, and the array becomes [12,6,6,3,3]
. After, he processes the next element, the array becomes [12,6,6,3,3,3,3]
, and then the he will leave, since it encounters an element that is not divisible by x=2
. The sum of the elements in the resulting array is equal to 36
.

In the second test case the array initially contains integers [4,6,8,2]
, and x=2
. The resulting array in this case looks like [4,6,8,2,2,2,3,3,4,4,1,1,1,1,1,1]
.

*/
typedef long long int ll;
vector<pair<ll,ll> >a;
#define mp make_pair
#define f first
#define s second
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		a.clear();
		ll n,x;
		ll sum=0;
		cin>>n;
		cin>>x;
		for(int i=0;i<n;i++)
		{
			int b;
			cin>>b;
			a.push_back(mp(b,1));
		}
		int i=0;
		while((a[i].f)%x==0 && i!=a.size())
		 {
		 	 a.push_back(mp(a[i].f/x,x*a[i].s));
		 	
		 	 i++;
		 }
		 i=0;
		 while(i!=a.size())
		 {
		 	sum=sum+a[i].f*a[i].s;
		 	i++;
		 }
		 cout<<sum<<endl;
	}
}
