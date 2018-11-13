#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float money;
	float money_max=0;
	for(int a=0;a<=2;a++){
		for(int b=0;b<=4;b++){
			for(int c=0;c<=6;c++){
				for(int d=0;d<=10;d++){
					for(int e=0;e<=20;e++){
						if(a+b+c+d+e==20){
							money=pow(2000*(1+0.0063*12),1)*pow((1+0.0066*12),2*d)*pow((1+0.0069*12),3*c)*pow((1+0.0075*12),5*b)*pow((1+0.0084*12),a*8);
						}
						if(money>money_max)
							money_max=money;
					}
				}
			}
		}
	}
	printf("%f",money_max);
} 
