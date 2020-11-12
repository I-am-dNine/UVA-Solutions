#include<stdio.h>
#include<string.h>
int main(){
	char s[1001];
	int word[26]={0};
	int n,count=0;
	
	scanf("%d\n",&n);
	
	while(n--){
		gets(s);
		for(int i=0;i<strlen(s);i++){
			if(s[i]>='a' &&s[i]<='z'){
				word[s[i]-'a']++;
				count++;
			}
			else if(s[i]>='A' &&s[i]<='Z'){
				word[s[i]-'A']++;
				count++;
			}
		}
	}
	for(int i=count;i>=1;i--){
		for(int j=0;j<26;j++){
			if(word[j]==i){
				printf("%c %d\n",j+'A',i);
			}
		}
	}
	
	return 0;
}
