#include<iostream>
using namespace std;
const int k=20;				//共20个空位 
int Ar[20];
int SUSHU[13]={2,3,5,7,11,13,17,19,23,29,31,37,39};
int DFS(int n);				//深度优先搜索 
bool if_HNSB(int i);
bool if_SUSHU(int i,int l);
bool if_ADD1(int i);
int main()
{
	DFS(1);
	for(int i=0;i<20;i++)
	{
		cout<<" "<<Ar[i];
	}
	return 0;
} 
int DFS(int n)
{
	for(int i=1;i<=20;i++)
	{
		if(n>1&&n<20)
		{
			if(if_HNSB(i)&&if_SUSHU(i,Ar[n-2]))
			{
				Ar[n-1]=i;
				DFS(n+1);	
			}
		}
		else if(n==1)
		{
			Ar[n-1]=i;
			DFS(n+1);
		}
		else if(n==20)
		{
			if(if_HNSB(i)&&if_SUSHU(i,Ar[n-2])&&if_ADD1(i))
			{
				Ar[n-1]=i;
				return 0;	
			}
		}
	}
}
bool if_ADD1(int i)
{
	int var=i+Ar[0];
	for(int j=0;j<=12;j++)
	{
		if(var==SUSHU[j])
			return true;
	}
		return false;	
}
bool if_SUSHU(int i,int l)
{	
	int var=i+l;
	for(int j=0;j<=12;j++)
	{
		if(var==SUSHU[j])
			return true;
	}
	return false;
}
bool if_HNSB(int i)
{
	for(int j=0;j<=19;j++)
	{
		if(i==Ar[j])
			return false;
	}
	return true;
}
