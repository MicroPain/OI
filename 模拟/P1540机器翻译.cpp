//https://www.luogu.org/problemnew/show/P1540
#include<bits/stdc++.h> 
using namespace std; 
int dictionary[100001]; 
int main() 
{ 
	int M,N,key,sum=0; 
	int up=0,down=0, up2=0; 
	bool here=false;
	cin>>M>>N; 
	for(int i=0;i<N;i++) 
	{ 
		here=false;	
		cin>>key; 
		for(int j=0;j<up2;j++) 
		{ 
			if(dictionary[j]==key) 
			{ 
				here=true; 
			} 
		} 
		if(here) 
			continue; 
		if(up==M){ 
			up=down; 
			down++; 
			if(down==M) 
				down=0; 
		} 
		dictionary[up]=key; 
		up++; 
		if(up2<N-1) 
			up2++; 
		sum++;
	
	}
	cout<<sum;
	return 0;
}
