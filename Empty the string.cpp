/*Given a String s, In one operation we can delete any occurences of "geek" 
as a substring in the String. Find the number of delete operations you have to 
perform to make the String Empty. 

Example 1:

Input:
s = "gegeekek"
Output:
2
Explanation:
gegeekek
We can first delete the bold characters
which form "geek", and then delete the
remaning string "geek" again from the string.
So, we will need 2 operations

Example 2:

Input:
s = "geekkgee"
Output:
-1
Explanation:
It's not possible to make the String empty.*/
#include<bits/stdc++.h>
using namespace std;
/*method:(1)push all the elements into stack until we get char 'k'
        (2)if we get 'k' then start popping e,e,g;
        (3) again repeat the process until we get char 'k' again then repeat the process*/
int makeStringEmpty(string s) 
    {
       int i;
        stack<char> st;
        i=0;
        int c=0;
        while(i<s.size())
        {
           while(i<s.size() && s[i]!='k')
           {
               st.push(s[i]);
               i++;
           }
           if(i>=s.size()||s[i]!='k')
            {
                return -1;
            }
            if(st.empty() || st.top()!='e')
            {
                return -1;
            }
            st.pop();
            if(st.empty() || st.top()!='e')
            {
                return -1;
            }
            st.pop();
            if(st.empty() || st.top()!='g')
            {
                return -1;
            }
            st.pop();
            c++;
            i++;
        }
        if(!st.empty())
        {
            return -1;
        }        
        cout<< c;
        
}
int main()
{
	string s;
	cout<<"\n enter the string:";
	cin>>s;
	makeStringEmpty(s); 
}
