#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m, k;
	cin >> n >> m >> k;
	int a[n], b[m];
	
	for(int i=0; i<n; i++) 
		cin >> a[i];
	for(int i=0; i<m; i++) 
		cin >> b[i];
	int i=0, j=0, res=0;
	//do mang khong dam
	while(i<n && j<m) //chua mang nao duyet het	
	{
		if(a[i]<b[j]) i++;
		else if(a[i]==b[j]) { i++; j++; res++; }
		else j++;
	}
	cout << res;
}





