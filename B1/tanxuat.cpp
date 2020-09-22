#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[1000]={}, x;

	for(int i=1; i<=10; i++) {
		cin >> x;
		a[x]++;
	}
	
	for(int i=1; i<=10; i++) {
		if(a[x] != 0) {
			printf("%d xuat hien %d\n", i, a[i]);
		}
	}
}





