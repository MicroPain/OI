#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
	int a[10],max_l=-1,min_l=-1,max=-1000,min=1000;
	for(int i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(int j=0;j<=5;j++){
		for(int i=j;i<=10-1-j;i++){
			if(a[i]>max){
				max=a[i];
				max_l=i;
			}
			if(a[i]<min){
				min=a[i];
				min_l=i;
			}
		}
		swap(a[j],a[min_l]);
		swap(a[10-j-1],a[max_l]);
	}
	for(int i=0;i<10;i++)
		printf(" %d ",a[i]);
	return 0;
}
