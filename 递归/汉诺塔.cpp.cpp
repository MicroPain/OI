#include<bits/stdc++.h>
using namespace std;
int MY_move(int n,char x,char y,char z);
int main()
{
	char x='x',y='y',z='z';
	int n;
	scanf("%d",&n);
	MY_move(n,x,y,z);
}
int MY_move(int n,char x,char y,char z)
{
	if(n==1)                                                                
		printf("%c -> %c\n",z,x);
	else
	{
		MY_move(n-1,y,x,z);
		printf("%c -> %c\n",z,x);
		MY_move(n-1,x,z,y);
	}
	return 0;
}

