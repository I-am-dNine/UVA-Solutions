#include<stdio.h>

int main(){
	int n,m;
	
	while(scanf("%d %d",&n,&m)==2){
		if((n<2)||(m<2)){
			printf("Boring!\n");
			continue;
		}
		int backup=n;
		
		while(n%m==0 && n>1){
			n=n/m;
		}
		if(n!=1){
			printf("Boring!\n");
		}else{
			n=backup;
			while(n%m==0 && n>1){
				printf("%d ",n);
				n=n/m;
			}
			printf("1\n");
		}
	}
	
	return 0;
}
