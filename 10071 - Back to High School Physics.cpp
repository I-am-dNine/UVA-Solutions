#include<stdio.h>

int Dist(int v,int t){
	return 2 * v * t;
}

int main(){
	int v,t;
	while(scanf("%d %d",&v, &t)!=EOF){
		printf("%d\n",Dist(v,t));
	}
	
	return 0;
}
