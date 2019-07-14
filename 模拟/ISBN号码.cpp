#include<bits/stdc++.h>
using namespace std;
const int len=13;
char Code[len],num_1[len];
int num[9],sum=0,sign;
int main()
{
	scanf("%s",Code);
	for(int i=0;i<len;i++){
		num_1[i]=Code[i];
	}
	sign=num_1[12];
	num[0]=Code[0]-'0';				//0123456789012
	for(int i=2;i<=4;i++)			//0-670-82162-0
		num[i-1]=Code[i]-'0';		//0 123 45678 9
	for(int i=6;i<=10;i++)
		num[i-2]=Code[i]-'0';

	for(int i=0;i<9;i++)
		num[i]*=(i+1);
//	for(int i=0;i<9;i++){
//		printf("%d ",num[i]);
//	}
	for(int i=0;i<9;i++)
		sum+=num[i];
	if(sum%11==10)
	{
		if(sign=='X')
			printf("Right");
		else
		{
			num_1[12]='X';
			printf("%s",num_1);
		}
	}
	else
	{
		if(sum%11==sign-'0')
			printf("Right");
		else
		{
			num_1[12]=sum%11+'0';
			printf("%s",num_1);
		}
	}
}
