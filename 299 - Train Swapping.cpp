#include<stdio.h>

int main(){
	int i,j,temp,n,c;
	
	scanf("%d",&n);
	
	while(n--){
		int num[50]={},count=0;
		scanf("%d",&c);
		for(i=0;i<c;i++){
			scanf("%d",&num[i]);
		}
		
		for(i=0;i<c-1;i++){
			for(j=i+1;j<c;j++){
				if(num[i]>num[j]){
					temp =num[i];
					num[i]=num[j];
					num[j]=temp;
					count++;
				}
			}
		}

		printf("\nOptimal train swapping takes %d swaps.\n",count);
			
	}
	
	
	return 0;
}
