//#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned int n,a,b,c,dem=0;
	scanf("%d",&n);
	int x[n];
	float tien=0,t;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		dem=0;
		a=x[i]%10;
		x[i]/=10;
		b=x[i]%10;
		if(b==a) dem++;
		x[i]/=10;
		c=x[i]%10;
		if(c==a||c==b) dem++;
		if(dem==1) tien+=0.5;
		if(dem==2) tien+=10;
	}
	t=10-0.25*n+tien;
	if(t<0) printf("0");
//	else printf("%f",t);
	else cout<<t;

}
