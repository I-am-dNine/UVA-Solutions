#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char c[1001];
	int i,d,sum,max=1;
	
	while(scanf("%s",c) != EOF){			//find ascii code and chg it start from 0,1,2...
		for(i=0;i<strlen(c);i++){
			if(isdigit(c[i])){
				d = c[i]-48;
			}
			else if(isupper(c[i])){
				d= c[i]-55;
			}
			else if(islower(c[i])){
				d= c[i]-61;
			}
			sum+=d;
			
			if(d>max){
				max =d;
			}
		}
		
		for(i =max; i<=64; i++){
			if(max%i==0){
				printf("%d",i+1);
				break;
			}
			else if(max==64){
				printf("such number is impossible!\n");
			}
		}
	}
	return 0;
}
