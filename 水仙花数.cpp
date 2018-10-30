#include<iostream>
using namespace std;
int main()
{
	int A,B,C;
	for(A=1;A<=9;A++)
		for(B=0;B<=9;B++)
			for(C=0;C<=9;C++)
			{
				if(A*100+B*10+C==A*A*A+B*B*B+C*C*C)
					printf("%d%d%d\n",A,B,C);
			}
	return 0;
}
