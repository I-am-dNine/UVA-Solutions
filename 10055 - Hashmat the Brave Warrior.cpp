#include<stdio.h>


int main(){
	long int a,b;
	
	while(scanf("%d %d",&a,&b) != EOF){
		
		if(a<b){
			printf("%d\n",b-a);
		}
		else{
			printf("%d\n",a-b);
		}
	}
	return 0;
} 
