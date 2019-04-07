#include<iostream>
using namespace std;
int m_sort(int P[],int a,int b) {
	for(int i=a;i<=b;i++) {
		for(int j=i;j<=b;j++) {
			if(P[j]<P[i]) {
				int t=P[j];
				P[j]=P[i];
				P[i]=t;
			}
		}
	}
	return 0;
}
int main() {
	int n,m,o;     //n艘船，m个人，船的限重为o 
	cin>>n>>m;
	int P[m+1];
	for(int i=1;i<=m;i++) {
		cin>>P[i];		
	}
	m_sort(P,1,m);
	int j=m;
	for(int i=1;i<j;i++) {		//算出坐两个人的船 
		while(P[j]+P[i]>o&&i<j) {
			j--;
		}
		if(P[j]+P[i]<=o) {
			sum++;
			j--;
		}
	}
	sum+=(m-sum*2); 
	/*for(int i=1;i<=m;i++) {
		cout<<" "<<P[i];
	}*/
	cout<<sum;
	return 0;
}
