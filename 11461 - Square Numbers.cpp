#include<stdio.h>

int main(){
	int a,b,i,sum=0;
	
	while(scanf("%d  %d",&a,&b)&& a!=0 && b!=0){
		int temp =0;
		for(i=1;i<=b;i++){
			sum =i*i;
			if(sum<=b){
				temp++;
			}
		}
		printf("%d\n",temp);
	}
	return 0;
}
