#include<stdio.h>
#include<string.h>

int main(){
	
	char rotate[10];
	int a,t,b,n,e,s,w,temp;
	
	while(scanf("%d\n",&a) && a){
		
		t=1,n=2,w=3,e=4,s=5,b=6;
		while(a--){
			gets(rotate);
			if(strcmp(rotate,"north")==0){
				temp=n,n=t,t=s,s=b,b=temp;
			}else if(strcmp(rotate,"east")==0){
				temp=e,e=t,t=w,w=b,b=temp;
			}else if(strcmp(rotate,"south")==0){
				temp=s,s=t,t=n,n=b,b=temp;
			}else if(strcmp(rotate,"west")==0){
				temp=w,w=t,t=e,e=b,b=temp;
			}
		}
		printf("%d\n",t);
	}
	
	return 0;
}
