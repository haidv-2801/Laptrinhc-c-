#include<bits/stdc++.h>
using namespace std;
void print(int i) {
	if(i>=0) {
		printf("%d ", i); //di thang xuong  10 - 0
		print(i-1);
		printf("%d ", i); //di nguoc len 0-10
	}
}
int main()
{
	print(20);
}





