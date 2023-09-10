/*Once upon a time in a land of numbers, there was a sequence called A, which consisted of 
N non-negative integers.The wise mathematicians of the kingdom had a task at hand: they needed to
embark on a quest to discover if within this sequence, there existed an even number that could
be formed by adding two different elements of A together. But they didn't stop there; they were 
determined to find the mightiest of such even numbers, the one that stood above all others. 
Help them to find that number.
Input Format
The input is given from Standard Input in the following format:
N
A1, A2, A3,.....,AN
Constraints
2<=N<=2*10^5
0<=Ai<=10^9
The elements of A are Distinct.
All values in the input are integers.
Output Format
Print -1 if there is no even number represented as the sum of two different elements of A.
If such an even number exists, print the maximum such number.

Sample Input 0

3
2 3 4
Sample Output 0

6
Explanation 0

The values represented as the sum of two distinct elements of A are 5, 6, and 7.
 We have an even number here, and the maximum is 6.

Sample Input 1

2
1 0
Sample Output 1

-1
Explanation 1

The value represented as the sum of two distinct elements of A is 1. We have no even number 
here, so -1 should be printed.*/
#include<bits/stdc++.h>
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
  vector<int>v1,v2;
 for(int i=0;i<n;i++)
   {
       if(a[i]%2==0)
       {
           v1.push_back(a[i]);
       }
       else
       {
           v2.push_back(a[i]);
       }  
   }
    int maxi=-1;
    sort(v1.rbegin(),v1.rend());
    sort(v2.rbegin(),v2.rend());
    if(v1.size()>=2)
    {
        maxi=max(maxi,v1[0]+v1[1]);
    }
    if(v2.size()>=2)
    {
        maxi=max(maxi,v2[0]+v2[1]);
    }
    cout<<maxi;
}
