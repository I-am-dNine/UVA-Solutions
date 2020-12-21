#include<stdio.h>

void bangla(long long num){
	if(num>=10000000){
		bangla(num/10000000);
		printf(" kuti");
		num%=10000000;
	}
	if(num>=100000){
		printf(" %lld lakh",num/100000);
		num%=100000;
	}
	if(num>=1000){
		printf(" %lld hajar",num/1000);
		num%=1000;
	}
	if(num>=100){
		printf(" %lld shata",num/100);
		num%=100;
	}
	if(num)
		printf(" %lld",num);
}

int main(){
	long long num;
	
	long long con=0;
	
	while(scanf("%lld",&num)==1){
		printf("%4lld.",++con);
		
		if(num){
			bangla(num);
		}else{
			printf(" 0");
		}
		printf("\n");
	}
	return 0;
}
