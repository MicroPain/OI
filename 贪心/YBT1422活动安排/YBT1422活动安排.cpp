#include<iostream>
using namespace std;
int mm_sort(int Ar[][3],int a,int b);
int mm_ischosen(int Ar[][3],int a,int b); 
int main(){
	int n,sum=0;	//����n���,��ѡ�Ļ��sum�� 
	cin>>n;				
	int Ar[n+1][3];	//���ÿ�����ʼĩʱ��
	for(int i=1;i<=n;i++){
		for(int j=0;j<=1;j++){
			cin>>Ar[i][j];
		}
		Ar[i][2]=1;	//���ڱ�Ǹ������Ƿ��ų���ѡ�� (1Ϊ����)
	}
	mm_sort(Ar,1,n);//����ʼλ����С�����Ar���� 
	for(int i=1;i<=n;i++){
		if(Ar[i][2]!=0){
			Ar[i][2]=2;
			for(int j=i+1;j<=n;j++){
				Ar[j][2]=mm_ischosen(Ar,i,j);
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(Ar[i][2]==2)
			sum++;
	} 
	cout<<sum;
	return 0;
}
int mm_sort(int Ar[][3],int a,int b){
	for(int i=a;i<=b;i++){
		for(int j=i;j<=b;j++){
			if(Ar[j][1]<Ar[i][1]){
				int t1,t2;
				t1=Ar[j][1];
				Ar[j][1]=Ar[i][1];
				Ar[i][1]=t1;
				t2=Ar[j][0];
				Ar[j][0]=Ar[i][0];
				Ar[i][0]=t2;		
			}
		}	
	}
}
int mm_ischosen(int Ar[][3],int a,int b){
	if(Ar[b][0]<Ar[a][1])
		return 0;
	else
		return 1;
}
