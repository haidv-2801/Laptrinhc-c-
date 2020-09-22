#include<stdio.h>

int main()
{
	int a[10][10];
	int n, m;
	scanf("%d%d",&n,&m);
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nMa tran:\n");
	
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			printf("%-5d",a[i][j]);
		}
		printf("\n");
	}
	
}
//
//00 01 02
//10 11 12
//20 21 22





