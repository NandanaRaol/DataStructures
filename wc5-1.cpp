/*A. Bheem's Energy Crystal's
time limit per test2 s.
memory limit per test256 MB
inputstandard input
outputstandard output
Chota Bheem of Dolakpur has been given a rectangular board of M×N
 squares . Also he has an abundance of special "energy crystals," each shaped 2×1
 squares . These energy crystals can also be rotated if necessary. Chota Bheem's mission is to determine how many of these energy crystals he can arrange on the board while complying with the following conditions:

1. Each energy crystal must completely cover two adjacent squares on the board.

2. There should be no overlap or gaps between any of the energy crystals.

3. They must all stay within the boundaries of the board, even if they touch the edges.

Chota Bheem's task is to find the maximum number of energy crystals he can fit on the board while adhering to these rules.

Input
In a single line you are given two integers M
 and N
 — board sizes in squares (1=M=N=16
).

Output
Output one number — the maximal number of energy crystals, which can be placed.

Examples
inputCopy
2 4
outputCopy
4
inputCopy
3 3
outputCopy
4
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m;
	cin>>n;
   if(m%2!=0 && n%2!=0)
	{
		int k=(n/2)*m;
		int p=k+((m*n-(k*2))/2);
		cout<<p;
	}
	else
	{
		cout<<(m*n)/2;
	}
}
