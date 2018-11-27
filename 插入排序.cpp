#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int Ar[7]={54,27,63,9,17,49,36};
	for(int i=1;i<=6;i++)
	{
		int key=Ar[i];
		for(int j=0;j<i;j++)
		{
			if(Ar[j]>key)
			{
				for(int k=i;k>j;k--)
				{
					Ar[k]=Ar[k-1]; 
				}
				Ar[j]=key;
				break;
			}
		}
	}
	for(int i=0;i<=6;i++)
		printf(" %d ",Ar[i]);
	return 0;
 } 
