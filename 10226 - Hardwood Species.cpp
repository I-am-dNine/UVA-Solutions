#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmp(const void *a,const void *b){
	return (strcmp((char*)a,(char*)b));
}
int main(){
	int n,i,j,k,con,nn;
	scanf("%d",&n);
	getchar();
	getchar();
	nn=n;
	while(n--){
		char s[1001][32]={0};
		if(nn-1 != n){
			printf("\n");
		}
		i=0;
		while(1){
			gets(s[i]);
			if(strcmp(s[i],"")==0){
				break;
			}
			i++;
		}
		qsort(s,i,sizeof(s[0]), cmp);
	
		for(j=0;j<i;j++){
			con=1;
			for(k=j+1;k<=i;k++){
				if(strcmp(s[j],s[k])==0){
					con++;
				}else{
					j=k-1;
					break;
				}
			}
			printf("%s %.4lf\n",s[j],con*100.0/i);
		}	
	}
	
	return 0;
}
