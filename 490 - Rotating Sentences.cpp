#include<stdio.h>
#include<string.h>

int main(){
	char s[100][101];
	int i=0,j,k,max;
	
	while(gets(s[i]) != NULL){
		if(i == 0){
			max = strlen(s[i]);
		}else if(max < strlen(s[i])){
			max = strlen(s[i]);
		}
		i++;
	}
	for(j = 0; j < max; j++){
		for(k = i-1; k >= 0; k--){
			if(j < strlen(s[k])){
				printf("%c", s[k][j]);
			}else if(k != 0){
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
