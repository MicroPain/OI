#include<bits/stdc++.h>
using namespace std;
const int MAX 100
int SCAN(int x[]);
int ADD(int c[],int a[],int b[]);
int main()
{
	int a[MAX];
	int b[MAX];
	int c[MAX];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	SCAN(a);
	SCAN(b);
	ADD(c,a,b);
	return 0;
}
int SCAN(int x[])
{
	string s;
	cin>>s;
	x[0]=s.length();
	for(int i=1;i<=x[0];i++)
	{
		x[i]=s[x[0]-i]-'0';
	}
	return 0;
}
int ADD(int c[],int a[],int b[])
{
	int k=max(a[0],b[0]);
	for(int i=1;i<=k+1;i++)
	{
		c[i]+=a[i]+b[i];
		if(c[i]>=10)
		{
			c[i+1]++;
			c[i]%=10;	
		}
	}
	for(int i=MAX-1;i>=1;i--)
	{
		if(c[i]!=0)
		{
			c[0]=i;
			break;
		}
	}
	for(int i=c[0];i>=1;i--)
		printf("%d",c[i]);
	return 0;
}
