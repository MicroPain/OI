#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int Ar[7]={54,27,63,9,17,49,36};
	int min=100000,min_l;
	for(int i=0;i<6;i++)
	{
		for(int j=i;j<=6;j++)
		{
			if(Ar[j]<min){
				min_l=j;
				min=Ar[j];
			}
		}
		min=100000;
		swap(Ar[min_l],Ar[i]);
	}
	for(int i=0;i<=6;i++)
		printf(" %d ",Ar[i]);
		
	return 0;
 } 
