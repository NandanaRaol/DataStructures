/*Given an array of size N containing only 0s, 1s, and 2s; sort the 
array in ascending order.

Example 1:

Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.
Example 2:

Input: 
N = 3
arr[] = {0 1 0}
Output:
0 0 1
Explanation:
0s 1s and 2s are segregated 
into ascending order.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
*/
#include<iostream>
using namespace std;
 void sort012(int a[], int n)
    {
       int low=0;
       int mid=0;
       int high=n-1;
       while(mid<=high)
        {
            if(a[mid]==0)
            {
              swap(a[mid],a[low]);
              mid++;
              low++;
            }
            else if(a[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(a[mid],a[high]);
                high--;
            }
        }
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
	sort012(a,n);
	cout<<"\n after sorting:";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
 
