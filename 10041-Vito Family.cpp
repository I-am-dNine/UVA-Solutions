#include<stdio.h>
#include<stdlib.h>
int main(){
	int test,r,num[30000]={0};
	
	scanf("%d",&test);
	
	while(test--){
		scanf("%d",&r);
		
		for(int i=0;i<r;i++){
			scanf("%d",&num[i]);
		}
		
		int min =0,temp,mid;
		
		for(int i=0;i<r-1;i++){		//SORT
			min = i;
			
			for(int j=i+1;j<r;j++){
				if(num[min]>num[j]){
					min = j;
				}
			}
			if(min!=i){
				temp = num[min];
				num[min] = num[i];
				num[i] = temp;
			}	
		}
		
		mid = num[r/2];
		
		int sum=0;
		
		for(int i=0;i<r;i++){
			sum = sum +abs(mid-num[i]);
		}
		printf("%d\n",sum);
		
	}
	return 0;
} 
