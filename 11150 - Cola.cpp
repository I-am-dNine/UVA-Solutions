#include<stdio.h>

int main(){
	int n,sum=0,surplus=0;
	
	while(scanf("%d",&n)!=EOF){
		sum=n;
		
		while(n>=3){
			surplus=n%3;
			n/=3;
			sum+=n;
			n+=surplus;
		}
		
		if(n==2){
			++sum;
		}
		printf("%d\n",sum);
		
	}
	
	
	return 0;
}
