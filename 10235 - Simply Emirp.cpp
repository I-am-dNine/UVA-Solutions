#include<stdio.h>

int isPrime(int n){
	int i;
	for(i=2;i<n;i++){
		if(n%i==0) break;
	}
	return i==n;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(isPrime(n)){
			int n1=n,n2=0;
			while(n1){
				n2=(n1%10)+n2*10;
				n1/=10;
			}	
			if(isPrime(n2) && n2!=n){
				printf("%d is emirp.\n",n);
			}else{
				printf("%d is prime.\n",n);
			}
		}else{
			printf("%d is not prime.\n",n);
		}
	}

	return 0;
}
