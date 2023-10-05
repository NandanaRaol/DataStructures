#include<iostream>
using namespace std;
 int value(char a)
    {
        if(a=='I')
        {
          return 1;
        }
        if(a=='V')
        {
          return 5;
        }
        if(a=='X')
        {
          return 10;
        }
        if(a=='L')
        {
          return 50;
        }
        if(a=='C')
        {
          return 100;
        }
        if(a=='D')
        {
          return 500;
        }
        if(a=='M')
        {
          return 1000;
        }
    }
    /* IF  s[i]<s[i+1] then '-'  
    /*III=1+1+1    IX=-1+10      XI=10+1*/
    int romanToDecimal(string &str)
    {
        int n=str.size();
        int k1,k2,ans=0;
        if(n==1)
        {
            ans=value(str[0]);
            cout<<"\n "<<ans;
            return ans;
        }
        for(int i=0;i<n-1;i++)
        {
           k1=value(str[i]);
           k2=value(str[i+1]);
           if(k1<k2)
           {
              ans=ans-k1;
           }
           else if(k1>=k2)
           {
             ans=ans+k1;
           }
   
        }
        ans=ans+value(str[n-1]);
        cout<<"\n"<<ans;
        return ans;
    }
    int main()
    {
    	string str;
    	cout<<"\n enter the roman numeber:";
    	cin>>str;
    	romanToDecimal(str);
	}
