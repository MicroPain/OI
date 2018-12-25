#include<bits/stdc++.h>
#include<cstring>
#define MAX 520
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
int MY_plus(int a[],int b[],int r[],int len)
{
    int x=0,sign=0;
    for(int i=0;i<=len;i++)
    {
        r[i]+=a[i]+b[i]+x;
        x=r[i]/10;
        r[i]%=10;
    }
    for(int i=MAX-1;i>=0;i--)
    {
        if(r[i]!=0)
        {
            sign=i;	
            break;
        }
    }
    for(int i=sign;i>=0;i--)
        cout<<r[i];
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
    if(len1>=len2)
        MY_plus(Ar,Ar1,res,len1);
 	else 
        MY_plus(Ar1,Ar,res,len2);
    return 0;
}
