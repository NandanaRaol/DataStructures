#include<bits/stdc++.h>
using namespace std;
int prio(char c)
{
    if(c=='*' || c=='/')
    {
        return 2;
    }
    else if(c=='+' || c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
void infixtopostfix(string s)
{
    string res="";
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        char c=s[i];
        if((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9'))
        {
            res+=c;
        }
        else if(c=='(')
        {
            st.push('(');
        }
        else if(c==')')
        {
            while(st.top()!='(')
            {
                res+=st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty() && (prio(st.top())>=prio(s[i])))
            {
                res+=st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    cout<<res<<"\n";
}
int main()
{
    string str = "a+b*c+d" ;
    infixtopostfix(str);
    return 0;
}
