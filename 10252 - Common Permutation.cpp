#include<stdio.h>

int main(){
	char s[1001];
	
	while(gets(s)){
		int word1[128]={},word2[128]={};
		for(int i=0;s[i];i++)
			word1[s[i]]++;
		gets(s);
		for(int i=0;s[i];i++)
			word2[s[i]]++;
		for(int i=0;i<128;i++){
			for(int j=0;j<word1[i] && j<word2[i];j++){
				printf("%c",i);
			}
		}
		puts("");		
	}
}
