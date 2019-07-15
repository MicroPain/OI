#include<bits/stdc++.h>
using namespace std;
const int M_MAX=20010;
int n,k;
struct A{int x;}a[M_MAX],b[M_MAX],c[M_MAX];
inline A make_A(int x)
{
	A AA;AA.x=x;return AA; 
}
priority_queue<A> Q;
bool operator < (A a,A b){return a.x>b.x;}

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&a[i].x);
//	for(int i=1;i<=n;i++)printf("%d ",a[i].x);
	for(int i=1;i<=n;i++)Q.push(a[i]);
	for(int i=1;i<n;i++){
		b[i]=Q.top();Q.pop();
		c[i]=Q.top();Q.pop();
		k+=b[i].x+c[i].x;
		Q.push(make_A(b[i].x+c[i].x));
	}
	printf("%d",k);
	return 0;
}
