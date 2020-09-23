#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, x, result = 0;
	cin >> n >> k;
	int a[1000]={}, *p=a+500; //danh dau
	for(int i=0; i<n; i++) {
		cin >> x; 
		p[x]++;
		result += p[k-x];
	}
	
	cout << result;
}





