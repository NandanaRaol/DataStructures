#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
   // cout<<s;
   string res="";
   stack<char> st;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]!=' ')
          st.push(s[i]);
       else
       {
           while(!st.empty())
           {
               res+=st.top();
               st.pop();
           }
           cout<<res<<" ";
           res="";
       }
   }
   res="";
   while(!st.empty())
   {
       res+=st.top();
       st.pop();
   }
   cout<<res<<" ";
}
