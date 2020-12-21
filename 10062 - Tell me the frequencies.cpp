#include<stdio.h>
#include<string.h>

int main(){
	char s[9999];
	int tmp=0,i,j;
	
	while(gets(s)!=NULL){
		int a[95]={0};
		if(tmp!=0){
			printf("\n");
		}
		tmp++;
		for(i=0;i<strlen(s);i++){ 
			a[s[i]-' ']++;
		}
		for(i=1;i<=strlen(s);i++){
			for(j=94;j>=0;j--){
				if(a[j]==i){
					printf("%d %d\n",j+' ',i);
				}
			}
		}
	}
	
	return 0;
}
