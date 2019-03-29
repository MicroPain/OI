//https://www.luogu.org/problemnew/show/P3378
#include<bits/stdc++.h>
using namespace std;
int mIN(int A[]);
int mOVEaHEAD(int A[],int x);
int up=0,down=1;
int main()
{
	int N;
	int A[10001];
	scanf("%d",N);
	int CMD[N][2];
	for(int i=0;i<N;i++)
	{
		printf("%d",CMD[i][0]);
		if(CMD[i][0]==1)
		{
			cin>>CMD[i][1];
		}
	}
	for(int i=0;i<N;i++)
	{
		
		if(CMD[i][0]==1)
		{
			up++;
			A[up]=CMD[i][1];
		}
		if(CMD[i][0]==3)
		{
			int x_loc=mIN(A);
			mOVEaHEAD(A,x_loc);
		}
		if(CMD[i][0]==2)
		{
			int x_loc=mIN(A);
			printf("%d\n",A[x_loc]);
		}
	}
	return 0;
}
int mIN(int A[])
{
	int x=down;
	for(int i=down;i<=up;i++)
	{
		if(A[i]<A[x])
			x=i;	
	}
	return x;
}
int mOVEaHEAD(int A[],int x)
{
	for(int i=x+1;i<=up;i++)
	{
		A[i-1]=A[i];
		A[i]=0;
	}
	up--;
	return 0;
}
