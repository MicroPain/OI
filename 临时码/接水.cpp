#include<bits/stdc++.h>
#define size 3001
#define MAX 300001
using namespace std;
int main() {
	int n,m,max=-1,sec;  //��n��ͬѧ���Ŷӣ�m��ˮ��ͷ 
	cin>>n>>m;
	int index=m+1;
	int W[n+1];  //n��ͬѧ�Ľ�ˮ�� 
	int W2[n+1]; //ÿ��ͬѧ�ĺ�ʱ 
	int SLT[m+1];
	memset(SLT,0,sizeof(SLT));
	memset(W,0,sizeof(W));
	for(int i=1;i<=n;i++) {
		cin>>W[i];
	}
	for(int i=1;i<=m;i++) {
		SLT[i]+=W[i];
	}
	for(sec=1;;sec++) {
		for(int i=1;i<=m;i++) {
			if(SLT[i]>max)
				max=SLT[i];
		}
		if(max==0) {
			sec--;
			break;
		}
		for(int i=1;i<=m;i++) {
			SLT[i]--;
			if(SLT==0&&n>=1) {
				n--;
				SLT[i]=W[index];
			}
		}
	}
	cout<<sec;
	return 0;
}
