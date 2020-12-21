#include<stdio.h>
#include<ctype.h>
int main(){
	char key[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char s;
	
	while(scanf("%c",&s)!=EOF){
		s=tolower(s);
		if(s==' ' || s=='\n'){
			printf("%c",s);
		}else{
			for(int i=0;key[i];i++){
				if(s==key[i]){
					printf("%c",key[i-2]);
				}
			}
		}
	}
	
	return 0;
}
