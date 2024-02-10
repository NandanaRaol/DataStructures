#include<bits/stdc++.h>
using namespace std;
bool isoperator(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
      return true;
    return false;  
}
string pti(string s)
{
    stack<string> st;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(isoperator(s[i]))
        {
            string a1=st.top();
            st.pop();
            string a2=st.top();
            st.pop();
            string temp='('+a1+s[i]+a2+')';
            st.push(temp);
        }
        else
        {
            st.push(string(1,s[i]));
        }
    }
    return st.top();
}
int main()
{
  string s= "*-A/BC-/AKL";
  cout << "Infix :" << pti(s);
  return 0;
}
