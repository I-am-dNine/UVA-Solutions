#include<stdio.h>
#include<string.h>

int main(){
	char s[1000]={0};
	int sn,i,x,y;
	
	while(1){
		scanf("%s",s);
		sn = strlen(s);
		
		if(s[0]=='0' && sn==1){
			break;
		}
		x=0;y=0;
		
		for(i=0;i<sn;i++){
			if(i%2==0){
				x+=s[i]-'0';
			}else{
				y+=s[i]-'0';
			}
		}
		
		if((x-y)%11==0){
			printf("%s is a multiple of 11.\n",s);
		}else{
			printf("%s is not a  multiple of 11.\n",s);
		}
	}
	
	return 0;
}
