#include<stdio.h>

int main(){
	char s[1001];
	
	while(gets(s)){
		int a[128]={},b[128]={};
		
		for(int i=0;s[i];i++){
			a[s[i]]++;
		}
		gets(s);
		for(int i=0;s[i];i++){
			b[s[i]]++;
		}
		
		for(int i=0;i<128;i++){
			for(int j=0;j<a[i] && j<b[i];j++){
				if(i !=' '){
					printf("%c",i);	
				}
			}
		}
		puts("");
	}
	
	
	return 0;
}
