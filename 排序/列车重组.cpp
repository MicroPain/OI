//洛谷题目地址：https://www.luogu.org/problemnew/show/P1116
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	const int N=n;
	int Ar[N];
	for(int i=0;i<N;i++)
	{
		cin>>Ar[i];
	} 
	for(int j=N;j>0;j--)
		for(int i=0;i<j-1;i++)
		{
			if(Ar[i]>Ar[i+1]){
				swap(Ar[i],Ar[i+1]);
				sum++;
			}
		}
	cout<<sum;
	return 0;
 } 
