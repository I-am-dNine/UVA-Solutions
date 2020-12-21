#include<stdio.h>

int main(){
	int n,a,b,sum,k,t;
	scanf("%d",&n);
	
	for(k=1;k<=n;k++){

		
		scanf("%d %d",&a,&b);
		if(a%2!=0){
			t=a; 
		}else{
			t=a+1;
		}
		for(sum=0;t<=b;t+=2){
			sum+=t;
		}
		printf("Case %d: %d\n",k,sum);
	}
	
	return 0;
}
