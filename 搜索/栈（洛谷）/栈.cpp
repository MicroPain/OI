#include<bits/stdc++.h>
using namespace std;
int ans=0;
int n=0;
void DFS(int tp,int r);
int main(){
		
	cin>>n;			//������ 
	DFS(0,1);
	cout<<ans;
	return 0;
}
void DFS(int tp,int r){
	if(r==n+1){		//��ǰ���������ڸ�����˵�������������ѿ� 
		ans++;
		return;
	}
	if(tp!=0){
		DFS(tp-1,r); 
	} 
	DFS(tp+1,r+1);
	return;
}
