#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, x, result = 0;
	cin >> n >> k;
	int a[500]={}; //danh dau
	for(int i=0; i<n; i++) {
		cin >> x; 
		a[x]++;
		
		if(k >= x) result += a[k-x];
	}
	
	cout << result;
}





