//数据结构
//栈的相关训练 
//奥赛一本通 p397
#include<iostream>
#define size 100
using namespace std;
int main()
{
	int i=0,top=0;
	char Ar[size+1];
	char Ar1[size+1];
	do 
	{
		cin>>Ar1[++i];
	}while(Ar1[i]!='@');
	for(int j=1;j<i;j++)
	{
		if(Ar1[j]=='(')
		{
			Ar[++top]='(';
		}
		if(Ar1[j]==')')
		{
			top--;
		}
	}
	if(top!=0)
		printf("WRONG");
	else
		printf("RIGHT");
	return 0;
}
