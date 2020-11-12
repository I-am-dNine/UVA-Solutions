#include<stdio.h>

int main(){
	int disp,n,m,i;
	int f[40];
	
	f[0]=1;f[1]=2;
	
	for(i=2;i<39;i++){
		f[i]=f[i-1]+f[i-2];
	}
	
	scanf("%d",&m);
	while(m--){
		scanf("%d",&n);
		
		if(n==0){
			printf("0 = (fib)\n");
		}else{
			printf("%d = ",n);
			
			disp=0;
			
			for(i=38;i>=0;i--){
				if(n>=f[i]){
					putchar('1');
					n-=f[i];
					disp=1;
				}else{
					if(disp==1) putchar('0');
				}
				
				
			}
			printf(" (fib)\n");	
		}
	}
	
	return 0;
}
