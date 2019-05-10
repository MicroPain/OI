#include<bits/stdc++.h>
using namespace std;
int N=0;
int row[1001];
void DFS(int x);
void out();
bool check(int x,int i);
int main(){
	int x=1;
	scanf("%d",&N);
	DFS(x);     
	return 0;
}
void DFS(int x){
	if(x>N){
		out();
		return;
	}
	for(int i=1;i<=N;i++){
		if(check(x,i)){
			row[x]=i;
			DFS(x+1);
			row[x]=0;
		}
	}
}
bool check(int x,int i){
	bool si=true;
	for(int j=x-1;j>=1;j--){
		if(row[j]==i||row[j]-(x-j)==i){
			si=false;
			break;
		}
	}
	return si;
}
void out(){
	for(int i=1;i<=N;i++){
		printf("%d ",row[i]);
	}
	printf("\n");
}


