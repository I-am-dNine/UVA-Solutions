#include<stdio.h>
#include<stdlib.h>

int main(){
	int test,r,s[500]={0};
	
	scanf("%d",&test);
	while(test--){
		scanf("%d",&r);
		for(int i=0;i<r;i++){
			scanf("%d",&s[i]);
		}
		int temp;
		for(int i=0;i<r-1;i++){
			for(int j=i+1;j<r;j++){
				if(s[i]>s[j]){
					temp=s[i];
					s[i]=s[j];
					s[j]=temp;	
				}
			}
		}
		int sum=0,mid=s[r/2];
		
		for(int i=0;i<r;i++){
			sum += abs(mid-s[i]);
		}
		printf("%d\n",sum);
	}
	
	return 0;
}
