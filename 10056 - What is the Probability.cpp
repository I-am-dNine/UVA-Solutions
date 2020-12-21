#include<stdio.h>
#include<math.h>

int main(){
	int test,n,i;
	double p,pi;
	
	scanf("%d",&test);
	
	for(int a=0;a<test;a++){
		scanf("%d %lf %d",&n,&p,&i);
		
		if(p<0.000001){
			printf("0.0000\n");
		}else{
			pi=(pow(1-p,i-1)*p)/(1-pow(1-p,n));
			printf("%.4lf\n",pi);
		}
		
	}
	
	return 0;
}
