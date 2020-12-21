#include<stdio.h>

int main(){
	char s[10001];
	int sum,max,d,i;
	
	while(scanf("%s",s)!=EOF){
		sum=0,max=1;
		for(i=0;s[i]!=0;i++){		
			if(s[i]>='0' && s[i]<='9') d = s[i] -'0';
			if(s[i]>='A' && s[i]<='Z') d = s[i] -'A'+10;
			if(s[i]>='a' && s[i]<='z') d = s[i] -'a'+36;
			sum+=d;
			
		if(d>max) max=d;
		}
		for(i=max+1;i<=62;i++){
			if(sum%(i-1)==0) break;
		}
		if(i<=62){
			printf("%d\n",i);
		}else{
			printf("such number is impossible\n");
		}
		
	}
	
	
	
	return 0;
}
