//洛谷P1006(才20分)
//https://www.luogu.org/problemnew/show/P1006
#include<iostream>
#include<cstdio>
int main(){
	int n,m;
	int sum=0;
	scanf("%d %d",&n,&m);
	const int N=n,M=m;
	int Ar[M+1][N+1];
	for(int i=1;i<=M;i++)
		for(int j=1;j<=N;j++){
			scanf("%d",&Ar[i][j]);			
		}
	n=m=1;
	while(!(n==N&&m==M)){
		if(n==N){
			m++;
			sum+=Ar[m][n];
			Ar[m][n]=0; 
			continue;
		}
		if(m==M){
			n++;
			sum+=Ar[m][n];
			Ar[m][n]=0;
			continue;
		}
		if(Ar[m+1][n]>=Ar[m][n+1]){
			m++;
			sum+=Ar[m][n];
			Ar[m][n]=0; 
		}
		else{
			n++;
			sum+=Ar[m][n];
			Ar[m][n]=0; 
		}
	}
	while(!(n==1&&m==1)){
		if(n==1){
			m--;
			sum+=Ar[m][n];
			Ar[m][n]=0; 
			continue;
		}
		if(m==1){
			n--;
			sum+=Ar[m][n];
			Ar[m][n]=0;
			continue;
		}
		if(Ar[m-1][n]>=Ar[m][n-1]){
			m--;
			sum+=Ar[m][n];
			Ar[m][n]=0; 
		}
		else{
			n--;
			sum+=Ar[m][n];
			Ar[m][n]=0; 
		}
	}
	printf("%d",sum);
	return 0;
} 
