#include<iostream>
using namespace std;
int main()
{
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout);
	int x,n=0,min,max,s=0;
	scanf("%d",&x);
	n++;
	s=x;
	min=max=x;
	while(scanf("%d",&x)==1)
	{
		s+=x;
		if(x<min) min=x;
		if(x>max) max=x;
		n++;
	}
	printf("%d %d %.3f",min,max,(double)s/n);
	return 0;
}
