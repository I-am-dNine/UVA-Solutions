#include<stdio.h>
#define max 40

int main(){
	long long n;
	int count,bit,i;
	char s[max];
	
	while(scanf("%lld",&n)!=EOF){
		if(n==0) break;
		
		i=max-1;
		count=0;
		
		s[i]='\0';
		do{
			i--;
			bit=n%2;
			count+=bit;
			s[i]='0'+bit;
			n/=2;
		}while(n>0);
		
		printf("The parity of %s is %d (mod 2).\n",&s[i],count);
	}
	
	return 0;
}
