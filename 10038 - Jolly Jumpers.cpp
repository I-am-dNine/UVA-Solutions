#include<stdio.h>
#include<stdlib.h>
#define max 3001

int main(){
	int n,i;
	int num[max];
	
	while(scanf("%d",&n)!=EOF){
		int check[max]={};
		for(i=0;i<n;i++){
			scanf("%d",&num[i]);
		}
		for(i=1;i<n;i++){
			check[abs(num[i-1]-num[i])]=1;
		}
		for(i=1;i<n;i++){
			if(check[i]==0) break;
		}
		
		if(i==n){
			printf("Jolly\n");
		}else{
			printf("Not jolly\n");
		}
		
	}
	
	
	return 0;
}

