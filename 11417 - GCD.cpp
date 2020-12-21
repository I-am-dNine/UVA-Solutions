#include<stdio.h>

int GCD(int a,int b){
	if(a==0) return b;
	else return GCD(b%a,a); 
}
int main(){
	int n,sum;
	
	while(scanf("%d",&n)!=0){
		sum=0;
		if(n==0) break;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				sum+=GCD(i,j);
			}
		}
		printf("%d\n",sum);	
	}
	
	return 0;
} 
