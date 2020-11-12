#include<stdio.h>
#include<stdlib.h>
#define MAX 1000000

int x[MAX];

int comp(const void *a,const void *b){
	return (*(int *)a)-(*(int *)b);
}

void find_mid(int *x,int n){
	int min,max,nx,np,i;
	
	qsort(x,n,sizeof(int),comp);
	
	if(n%2==1){
		min=x[n/2];
		for(nx=0,i=0;i<n;i++){
			if(x[i]==min) nx++;
		}
		np=1;
	}else{
		min=x[n/2-1],max=x[n/2];
		for(nx=0,i=0;i<n;i++){
			if(min<=x[i] && x[i]<=max) nx++;
		}
		np=max-min+1;
	}
	printf("%d %d %d\n",max,nx,np);
}

int main(){
	int n,i;
	
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&x[i]);
		}
		find_mid(x,n);
	}	
	return 0;
}
