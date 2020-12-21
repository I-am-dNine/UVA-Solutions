#include<stdio.h>

int main(){
	int n;
	
	scanf("%d",&n);
	while(n--){
		int m;
		scanf("%d",&m);
		int b1=0,b2=0;
		
		for(int v=m;v;v/=2) b1+=v%2;
		for(;m;m/=10){
			for(int v=m%10;v;v/=2) {
				b2+=v%2;	
			}
		}
		
		printf("%d %d\n",b1,b2);
	}
	
	return 0;
}
