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
