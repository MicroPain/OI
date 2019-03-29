洛谷题目地址：https://www.luogu.org/problemnew/show/P1059
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int n=0,x=0,j=0;
	scanf("%d",&n);
	int Ar[1001],Ar1[n];
	memset(Ar,0,sizeof(Ar));
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		Ar[x]++;
	} 
	for(int i=0;i<1001;i++)
	{
		if(Ar[i]!=0)
		{
			Ar1[j]=i;
			j++;
		}
	}
	printf("%d\n",j);
	for(int i=0;i<j;i++)
	{
		printf("%d ",Ar1[i]);
	}
	return 0;
 } 
