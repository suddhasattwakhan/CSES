#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	set<int>s;
	for(int i=0;i<n-1;i++)
	{
		int num;
		cin>>num;
		s.insert(num);
	}
	int cnt=1;
	for(cnt=1;cnt<=n;cnt++)
	{
		if(s.find(cnt)==s.end())
		{
			cout<<cnt;
			break;
		}
	}
	return 0;
}
