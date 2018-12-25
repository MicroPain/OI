#include<bits/stdc++.h>
#include<cstring>
#define MAX 52000
using  namespace std;
int MY_scan(int Ar[])
{
    string s;
    cin>>s;
    int K=s.length();		
    for(int i=1;i<=K;i++)
    {
        Ar[i]=s[K-i]-'0';
    }
    return K;
}
int MY_multiply(int Ar[],int Ar1[],int res[]
                        ,int len1,int len2)
{
    int x=0,sign;
    for(int i=1;i<=len1;i++){
        for(int j=1;j<=len2;j++)
        {
            res[i+j-1]+=Ar[i]*Ar1[j];
            x=res[i+j-1]/10;
            if(res[i+j-1]>=10){
                res[i+j-1]%=10;
                res[i+j]+=x;
            }
        }
    }
    for(int i=MAX-1;i>=1;i--)
    {
        sign=i;
        if(res[i]!=0&&res[i]!='-')
        {
            sign=i;
            break;
        }
    }
    for(int i=sign;i>=1;i--)
    {
        printf("%d",res[i]);
    }
    return 0;
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
    MY_multiply(Ar,Ar1,res,len1,len2);
    return 0;
}
