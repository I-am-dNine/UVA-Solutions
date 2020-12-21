#include<stdio.h>

int main(){
	long long a,b;

	while(scanf("%lld %lld",&a,&b)!=EOF){

		while(a<b){
			b=b-a;
			a++;
		}
		printf("%lld\n",a);
	}
	
	
	return 0;
}
