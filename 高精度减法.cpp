#include<bits/stdc++.h>
#include<cstring>
#define MAX 52000
using  namespace std;
int MY_scan(int Ar[])
{
    string s;
    cin>>s;
    int K=s.length();		
    for(int i=0;i<K;i++)
    {
        Ar[i]=s[K-i-1]-'0';
    }
    return K;
}
int MY_jian(int a[],int b[],int r[],int len)
{
    int x=0,sign=0;
    for(int i=0;i<=len;i++)
    {
        r[i]=a[i]-b[i];
        if(a[i]<b[i])
        {
            r[i]+=10;
            a[i+1]--;
        }
    }
    for(int i=MAX-1;i>=0;i--)
    {
        if(r[i]!=0)
        {
            sign=i;	
            break;
        }
    }
    return sign;
}
int main()
{
    int Ar[MAX],Ar1[MAX],res[MAX];
    int len1=0,len2=0;
    memset(Ar,0,sizeof(Ar));
    memset(Ar1,0,sizeof(Ar1));
    memset(res,0,sizeof(res));
    len1=MY_scan(Ar);
    len2=MY_scan(Ar1);
	int sign; 
    if(len1>=len2)
        sign=MY_jian(Ar,Ar1,res,len1);
 	else{
        sign=MY_jian(Ar1,Ar,res,len2);
    	printf("-");
	}
	for(int i=sign;i>=0;i--){
        printf("%d",res[i]);
	}
    return 0;
}
