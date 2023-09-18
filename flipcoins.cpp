/*There are N coins kept in a line. Each coin has two sides - one is colored
gold and the other silver. You can flip two adjacent coins any number of times. 
You need to make the gold-colored side of every coin facing up. You are given the initial
status of coins in a binary string s where '1' represents the gold side facing up and '0'
represents the silver side facing up. If it is possible to make the gold-colored side of 
every coin facing up, return "Yes", otherwise return "No".

Example 1: 

Input:
N = 8, s = "11001100"
Output:
Yes
Explanation: 
Flipping 3rd and 4th coin together and 7th 
and 8th coin together will do the task.
Example 2: 

Input:
N = 8, s = "10010100"
Output:
No
Explanation: 
It is not possible to make the gold 
colored side of every coin facing up.*/
#include<bits/stdc++.h>
using namespace std;
// if there are odd number if zero's then it is not possible to make all the srinng elements to 1
// if there are even number if zero's then it is  possible to make all the string elements to 1
    void flipCoins(string s)
    {
        int c=0,i=0;
        while(i<s.size())
        {
            if(s[i]=='0')
            {
                c++;
            }
            i++;
        }
        if(c%2!=0)
        {
            cout<<"No";
        }
        else
        {
          cout<<"Yes";
        }
    }
    int main()
    {
      	string s;
    	cout<<"\n enter the string:";
    	cin>>s;
    	flipCoins(s);
	}
