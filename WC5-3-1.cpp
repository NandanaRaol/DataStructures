#include<bits/stdc++.h>
using namespace std;
/*C. Bing Watcher Aditya
time limit per test2 s.
memory limit per test256 MB
inputstandard input
outputstandard output
Aditya from 6th class is an avid television enthusiast and has compiled 
a list of TV programs he's eager to watch for the day. His list contains n
 shows, i
-th of them starts at moment li
 and ends at moment ri
.

he has two TVs at home. He can watch two different shows simultaneously
 with two TVs but he can only watch one show at any given moment on a single TV. 
 If one show ends at the exact moment another show begins, he cannot view them on the same TV.

Aditya's primary objective is to ensure that he watches all n shows in his list.
 The question at hand is whether his two TVs are sufficient to accomplish this task.

Input
The first line contains one integer n
 (1=n=2·105
) — the number of shows.

Each of the next n
 lines contains two integers li
 and ri
 (0=li<ri=109
) — starting and ending time of i
-th show.

Output
If Polycarp is able to check out all the shows using only two TVs then print "YES" (without quotes).
 Otherwise, print "NO" (without quotes).

Examples
inputCopy
3
1 2
2 3
4 5
outputCopy
YES
inputCopy
4
1 2
2 3
2 3
1 2
outputCopy
NO
*/
int main()
{
	int n;
	cin>>n;
	pair<int,int>a[n+5];
	for(int i=0;i<n;i++)
	{
		cin>>a[i].first;
		cin>>a[i].second;
	}
	sort(a,a+n);
	bool f1=true;
	int f=-1,s=-1;
	for(int i=0;i<n;i++)
	{
		if(f<a[i].first)
		{
			f=a[i].second;
		}
		else if(s<a[i].first)
		{
			s=a[i].second;
		}
		else
		{
			f1=false;
		}
	}
    if(f1)
    {
    	cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
