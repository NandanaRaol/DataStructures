//QUESTION
/*You are given an array A consisting of n positive integers.
In one operation, you can choose any index i such that 1 <= i <=n and Ai is even, then you can assign Ai = Ai / 2. 

Your task is to make total sum of array even using minimum number of operations (possibly 0) or return -1 if it is not possible.

Example 1:

Input:
N = 5
A[] = {1, 2, 1, 2, 1}
Output: 1
Explanation: Initially sum is 7
which is odd. Assign A2 = A2/2
then array becomes 1, 1, 1, 2, 1
having sum 6 which is even. So total one
operation is required which is minimum
possible.

Example 2:

Input:
N = 3
B[] = {1, 1, 2}
Output: 0
Explanation: Sum is even ie 4.
*/
//MY CODE:
#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"\n enter the array size:";
   cin>>n;
   int a[n];
   cout<<"\n enter array elements:";
   for(int i=0;i<n;i++)
   {
     cin>>a[i];   	
   }
   int sum=0;	
   for(int i=0;i<n;i++)
   {
   	 sum=sum+a[i];
   }
   if(sum%2==0)
   {
    	return 0;
   }
   int c,ans=-1;
   for(int i=0;i<n;i++)
   {
   	 if(a[i]%2==0)
   	 {
   	    c=0;	
	   while(a[i]%2==0)
	   {
	   	  a[i]=a[i]/2;
	   	  c++;
	   }
	  if(ans==-1)
	  {
	  	ans=c;
	  } 
	  else
	  {
	  	ans=min(ans,c);
	   } 
    }
 }
   return ans;
}
