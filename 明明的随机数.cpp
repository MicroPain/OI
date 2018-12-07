#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	bool s=true;
	const int N=n;
	int Ar[N],Ar1[N];
	for(int i=0;i<N;i++)
	{
		cin>>Ar[i];
	} 
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(Ar[i]==Ar1[j])
				s=false;
		}
		if(s){
			Ar1[i]=Ar[i];
			sum++;
		}
	 } 
	for(int i=0;i<sum;i++)
	 {
	 	cout<<" "<<Ar1[i];
	 }
	 int x;
	 cin>>x;
	 const int K=sum;
	 int ANS[K];
	 ANS[0]=Ar1[0];
	 for(int i=1;i<K;i++)
	 {
	 	int key=Ar[i];
	 	for(int j=0;j<i;j++)
	 	{
	 		if(key<ANS[j])
	 		{
	 			for(int k=i;k>j;k--)
	 			{
	 				ANS[k]=ANS[k-1];
	 				ANS[j]=key;
				 }
			 }
		 }
	 }
	 for(int i=0;i<K;i++)
	 {
	 	cout<<" "<<ANS[i];
	 }
	return 0;
 } 
