#include<stdio.h>

int main(){
	int n,sum;
	
	while(scanf("%d",&n)!=EOF && n!=0){	
		while(n>9){
			sum=0;
			while(n){
				sum +=n%10;
				n=n/10;	
			}
			n=sum;
		}
		
		printf("%d\n",n);	
	}
	return 0;
}
