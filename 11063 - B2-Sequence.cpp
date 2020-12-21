#include<stdio.h>

int main(){
	int b[1005]={0},n,i,j,t=0;
	
	while(scanf("%d",&n)!=EOF){
		int b2 =0;
		int note[20005]={};
		
		for(i=1;i<=n;i++){
			scanf("%d",&b[i]);
			
			if(b[i]<=b[i-1]) b2=1;
		}
		
		for(i=1;i<=n;i++){
			for(j=i;j<=n;j++){
				
				if(note[b[i]+b[j]]==1) b2=1;
				
				note[b[i]+b[j]]=1;
			}
		}
		printf("Case #%d: It is",++t);
		if(!b2){
			printf(" a B2-Sequence.\n");
		}else{
			printf(" not a B2-Sequence.\n");
		}
		puts("");
	}
	
	return 0;
}
