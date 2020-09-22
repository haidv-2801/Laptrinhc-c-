#include <bits/stdc++.h>

using namespace std;

int n, t;

int main()
{
	cin>>t;
	if(t==1)
	{
		for(int i=2;i<=8;i++)
		{
			cin >> t;
			if(t!=i) 
			{
				cout << "mixed";
				return 0;
			}
		}
		cout << "ascending";
		return 0;
	}
	if(t==8)
	{
		for(int i=7;i>=1;i--)
		{
			cin >> t;
			if(t!=i) 
			{
				cout << "mixed";
				return 0;
			}
		}
		cout << "descending";
		return 0;
    }
	cout << "mixed";
}
