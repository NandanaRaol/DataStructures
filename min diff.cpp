/*Given an array of words containing n strings of the same lengths.

In one move, you can choose any position in any one string and change the letter at that position to the previous or next letter in alphabetical order. For example:

'c' can be changed to 'd' or 'b'.
'a' can only be changed to 'b'.
'z' can only be changed to 'y'.
Find the minimum difference over all 
the possible pairs of the n strings.

The difference between the two strings is the minimum
 number of moves required to make them equal. 

Example 1:

Input:
n = 5
words[] = { "cdd", "zba","dgf","xyz","mnp"}
Output: 6
Explanation:
Among all the pairs, the minimum difference 
is between the pairs ["cdd", "dgf"].
Convert 'c' to 'd' in one move.
Convert 'd' to 'g' in three moves.
Convert 'd' to 'f' in two moves.
Example 2:

Input:
n = 3
words[] = {"ab","ab","ab"}
Output: 0*/
#include<bits/stdc++.h>
using namespace std;
void minimum_difference(int n, vector<string> &words)
    {
          int sn=words[0].size();
          int ans=INT_MAX;
          for(int i=0;i<n;i++)
          {
              for(int j=i+1;j<n;j++)
              {
                  int temp=0;
                  for(int k=0;k<sn;k++)
                  {
                      temp=temp+abs(words[i][k]-words[j][k]);
                  }
                  ans=min(ans,temp);
              }
          }
          cout<<ans<<" ";
    }
int main()
{
	   int n;
	   cout<<"\n enter array size:";
       cin>> n;
        vector<string> words(n);
        cout<<"\n enter array elements:";
        for (int i = 0; i < n; i++) 
		{
            cin >> words[i];
        }
       minimum_difference( n,words) ;
}
