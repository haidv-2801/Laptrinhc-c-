#include<bits/stdc++.h>
using namespace std;
int main()
{
	char x[1005];
	scanf("%s",x);
	char s[1000]={x[0]};
	int k=1;
	for(int i=1; i<strlen(x); i++) {
		if(x[i]=='-') {
			s[k]=x[i+1];
			k++;
		}
	}
	printf("%s", s);
}





