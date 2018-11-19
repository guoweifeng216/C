#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number = rand()%100+1;
	int a = 0;
	int count = 0;
	printf("我已经想好了一个1到100之间的的数");
	do {
		printf("请猜这个1到100之间的数：");
		scanf("%d",&a); 
		count ++;
		if (a> number){
			printf("你猜的数太大了。"); 
		}else if (a < number){
			printf("你猜的数太小了。"); 
		}
		
	}while(a !=number); 
	printf("太好了，你用%d次就猜到答案。\n",count);
 }
