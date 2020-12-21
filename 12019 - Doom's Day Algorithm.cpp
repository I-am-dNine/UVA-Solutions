#include<stdio.h>

int main(){
	int n;
	int md[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	char* week[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	scanf("%d",&n);
	while(n--){
		int m,d;
		
		scanf("%d %d",&m,&d);
		
		for(int i=1;i<m;i++){
			d+=md[i];
		}
		d+=5;
		printf("%s\n",week[d%7]);
	}
	
	
	return 0;
}
