# include <stdio.h>
int main(){
	int n,i;
	int q_cnt=0;
	int o_cnt =0;
	int cnt =0;
	scanf("%d",&n);
	while (n != -1){
		if (n %2 ==0){
			o_cnt ++;
		}else{
			q_cnt ++;
		}
		scanf("%d",&n);
	}
	printf("%d %d\n",q_cnt,o_cnt);
} 
