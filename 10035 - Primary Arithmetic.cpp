#include<stdio.h>

int main(){
	long a,b;
	int temp,carry,sum;
	
	while(scanf("%ld %ld",&a,&b) &&(a||b)){
		carry=0;
		temp=0;
		while(a || b ){
			sum=(a%10)+(b%10)+temp;
			temp=sum>9;
			carry+=temp;	
			a = a/10;	
			b = b/10;
		}
		if(carry==0){
			printf("No carry operation.\n");
		}else if(carry==1){
			printf("1 carry operation.\n");
		}else{
			printf("%d carry operations.\n",carry);
		}
		
		
	}
	
	return 0;
}
