#include<stdio.h>

int main(){
	char s[1001];
	
	while(gets(s)){
		int w1[128]={},w2[128]={};
		
		for(int i=0;s[i];i++){
			w1[s[i]]++;
		}
		gets(s);
		for(int i=0;s[i];i++){
			w2[s[i]]++;
		}
		

		for(int i=0;i<128;i++){
			for(int j=0;j<w1[i] &&j <w2[i];j++){
				if(i !=' '){
					printf("%c",i);
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}
