#include<stdio.h>
int main(){
	
	int a,b,t;
	scanf("%d %d",&a, &b);
//	a=12;
//	b=18;
	while(b!=0){
		t = a%b;
		a=b;
		b=t;
	}
	printf("最大公约数%d",a);
}
