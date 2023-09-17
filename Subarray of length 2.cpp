/*Given an array A[ ] of N elements.
In one operation, you can select any subarray of length 2 and multiply all elements
 of that subarray by -1. You can do any number of operations (possibly zero).
Your task is to maximize the sum of all elements of all subarrays of A[ ].

Example 1:

Input:
N = 3
A[] = {-1, -2, -3}
Output: 14
Explanation:
We can do 1 operation on subarray from 
index = 2 to index = 3. After performing 
the operation, modified array A[] = 
{-1, 2, 3}. All subarrays  of the  modified 
array A[] are [-1], [2], [3], [-1, 2], [2, 3] 
and [-1, 2, 3]. Thus total sum of all 
subarrays is 14. This is the maximum sum 
which we can get by performing the 
operations.
Example 2:

Input:
N = 2
A[] = {0, 1}
Output: 2
Explanation: There is no need to do any 
operation. All subarrays of the array A[] 
are [0], [1] and [0, 1] and sum of all 
subarrays = 0 + 1 + 1 = 2.*/
#include<bits/stdc++.h>
using namespace std;
void maxSum(int n, vector<int> a)
    {
       int ans=0,min_abs=-1,nz=0,nn=0,x;
       for(int i=0;i<n;i++)
       {
           x=(i+1)*(n-i)*a[i];//contribution(sum of) of each element in subarray sums 
           //here we get four cases(1) all +ve,atleast one zero,even -ve,odd -ve numbers
           //if all+ve or even +ve or atleast one zero then all elements can be made +ve
           if(x<0)
           {
               nn++;
           }
           if(x==0)
           {
               nz++;
           }
          ans=ans+abs(x);
          if(min_abs==-1)
          {
              min_abs=abs(x);
          }
          else
          {
              min_abs=min(min_abs,abs(x));
          }
       }
       if((nn%2==0)|| (nz>0))//all +ve,even +ve,atleast one zero
       {
           cout<< ans;
       }
       else
       {
           cout<< ans-2*min_abs;//-2 times coz we are considering all as +ve sum so to
		   // subtract its contibution we need to subtract 2 times
       }
    }
    int main()
    {
       int n;
	   cout<<"\n enter array size:";
       cin>> n;
        vector<int> a(n);
        cout<<"\n enter array elements:";
        for (int i = 0; i < n; i++) 
		{
            cin >> a[i];
        }
       maxSum( n,a) ;	
	}
