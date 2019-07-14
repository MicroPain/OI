#include<bits/stdc++.h>
using namespace std;
const int m_max=105;
int n,most=0,sum=0;
struct k
{
	char mz[m_max];
	int qm,bj,lw;
	bool gb,xb;
	int mon=0,num=0;
}kk[m_max];
bool YS(int i){
	if(kk[i].qm>80&&kk[i].lw>0)return true;return false;
}
bool WS(int i){
	if(kk[i].qm>85&&kk[i].bj>80)return true;return false;
}
bool CJ(int i){
	if(kk[i].qm>90)return true;return false;
}
bool XB(int i){
	if(kk[i].qm>85&&kk[i].xb)return true;return false;
}
bool BJ(int i){
	if(kk[i].bj>80&&kk[i].gb)return true;return false;
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",kk[i].mz);
		scanf("%d%d",&kk[i].qm,&kk[i].bj);
		char g__b[3],x__b[3];
		scanf("%s %s",g__b,x__b);
		if(g__b[0]=='Y')kk[i].gb=true;
		if(g__b[0]=='N')kk[i].gb=false;
		if(x__b[0]=='Y')kk[i].xb=true;
		if(x__b[0]=='N')kk[i].xb=false;
		scanf("%d",&kk[i].lw);		
	}
	for(int i=1;i<=n;i++)
	{
		if(YS(i)){kk[i].num++;kk[i].mon+=8000;}
		if(WS(i)){kk[i].num++;kk[i].mon+=4000;}
		if(CJ(i)){kk[i].num++;kk[i].mon+=2000;}
		if(XB(i)){kk[i].num++;kk[i].mon+=1000;}
		if(BJ(i)){kk[i].num++;kk[i].mon+=850;}
		if(kk[i].mon>kk[most].mon)
		most=i;
		sum+=kk[i].mon;
	}
	printf("%s",kk[most].mz);
	printf("\n%d\n%d",kk[most].mon,sum);
	return 0;
}
