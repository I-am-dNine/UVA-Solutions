#include<stdio.h>

int main(){
	int tmp=0;
	char s;
	
	while((s=getchar())!=EOF){
		if(s =='\"'){
			if(tmp==0){
				tmp=1;
				printf("``");
				
			}else{
				tmp=0;
				printf("''");
				
			}
		}else{
			printf("%c",s);
		}
	}
	
	return 0;
}
