/*You are given a string S of lowercase Latin characters with size N. 
Your task is to find the lexicographically smallest substring with the maximum frequency.

Note: String p is lexicographically smaller than string q, if p is a prefix of q, is
 not equal to q or there exists i, such that pi < qi and for all j < i it is satisfied 
 that pj = qj. For example, abc is lexicographically smaller than abcd, abd is 
 lexicographically smaller than abec, afa is not lexicographically smaller than ab and a 
 is not lexicographically smaller than a.

Input:
N = 4
S = "gfgg"
Output: 
"g"
Explanation: 
Substring "g" is present 3
in the string and it can be proved
that it is the lexicographically 
smallest one
Example 2:

Input:
N = 1
S = "a"
Output: 
"a"
Explanation: 
The only possible 
substring is "a"*/
#include<iostream>
using namespace std;
string solve(int N, string s) 
    {
      
       int c[26],fr=-1;
       string ans="";
       for(int i=0;i<26;i++)
       {
           c[i]=0;
       }
       for(int i=0;i<N;i++)
       {
     -      c[s[i]-97]++;
       }
       for(int i=0;i<26;i++)
       {
          if(c[i]>0)
          {
           if(fr==-1||c[i]>c[fr])
           {
               fr=i;
           }
          }
       }
       ans=ans+char(fr+97);
       cout<<ans;
    }
int main()
{
  string s;
  int n;
  cout<<"\n enter string size:";
  cin>>n;
  cout<<"\n enter a string:";
  cin>>s;	
  solve(n,s);
}    
