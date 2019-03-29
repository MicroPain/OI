//位数问题《一本通p218》 
#include<iostream>
using namespace std;
int main()
{
	int f[101][101]={0};
	f[1][0]=9;
	f[1][1]=1;
	int n,x=9;
	scanf("%d",&n);
	for(int i=2;i<=n+1;i++)
	{
		if(n==2)
		x--;
		f[i][1]=f[i-1][1]*x+f[i-1][0];
		f[i][0]=f[i-1][0]*x+f[i-1][1];
	}
	printf("%d",f[n][0]);
	return 0;	
} 
