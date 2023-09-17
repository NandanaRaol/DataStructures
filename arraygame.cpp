/*You are playing an array game in which you are given two arrays arr and brr, each of size n. Each array is a permutation of n positive integers. 

In one operation, you can perform either of the following two steps:

Rotate the array arr anti-clockwise.
Remove the first element of both the arrays if they are the same.
Find the minimum number of operations required to make both the arrays empty. 

Example 1:

Input:
n = 3
arr[] = {1, 2, 3}
brr[] = {2, 1, 3}
Output:
5
Explanation:
operation 1: Rotate arr anti-clockwise. 
It becomes {2, 3, 1}.
operation 2: Remove first element {2} from 
both the arrays. arr = {3, 1} and brr = {1, 3}.
operation 3: Rotate arr anti-clockwise. arr = {1, 3}.
operation 4: Remove {1} from both the arrays. 
operation 5: Remove {3} from both the arrays. 

Example 2:

Input:
n = 2
arr[] = {1, 2}
brr[] = {2, 1}
Output:
3
Explanation:
Rotate arr once and then remove both elements.
*/
#include<bits/stdc++.h>
using namespace std;
 int min_operations(int n, int arr[],int brr[])
    {
	    int ans=0;
	    queue<int> q;
	    for(int i=0;i<n;i++)
	    {
	        q.push(arr[i]);
	    }
	    int i=0,x;
	    while(!q.empty())
	    {
	        x=q.front();
	        q.pop();
	        if(x==brr[i])
	        {
	           i++;
	        }
	        else
	        {
	            q.push(x);
	        }
	        ans++;
	    }
	   cout<<ans<<" ";
    }
 int main()
 {
   int n;
   cout<<"\n enter array arr1,brr1 size:";
   cin>>n;
   int arr[n],brr[n];
   cout<<"\n enter array1 elements:";
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];   	
   }	
   cout<<"\n enter array2 size:";
   for(int i=0;i<n;i++)
   {
   	cin>>brr[i];
   }
   min_operations( n,arr,brr);
 }   
