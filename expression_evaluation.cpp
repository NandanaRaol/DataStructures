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
string infixtopostfix(string s)
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
    return res;
    
}
bool isoperator(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
      return true;
    return false;  
}
int operation(int a,int b,char op)
{
    int a1=a;
    int b1=b;
   // int a1=a-'0';
    //int b1=b-'0';
    if(op=='*')
    {
        return a1*b1;
    }
    else if(op=='/')
    {
        return b1/a1;
    }
    else if(op=='+')
    {
        return a1+b1;
    }
    else if(op=='-')
    {
        return b1-a1;
    }
}
void evaluation(string p)
{
    stack<int> st;
    for(int i=0;i<p.size();i++)
    {
        if(isoperator(p[i]))
        {
            int a1=st.top();
            st.pop();
            int b1=st.top();
            st.pop();
            char op=p[i];
            int a=operation(a1,b1,op);
            st.push(a);
        }
        else
        {
            st.push(p[i]-'0');
        }
    }
    cout<<st.top();
}
int main()
{
    string str = "3+4*6-6" ;
    string p=infixtopostfix(str);
    evaluation(p);
    return 0;
}
