#include<stdio.h>

int main(){
	int n,m,i,base,cs,x,k,total,min;
	int cost[36];
	int cheapestlist[36],cheapestcount;
	
	scanf("%d",&n);
	for(cs=1;cs<=n;cs++){
		printf("Case %d:\n",cs);
		
		for(i=0;i<36;i++){
			scanf("%d",&cost[i]); 
		}
		scanf("%d",&m);
		
		while(m--){
			scanf("%d",&x);
			
			min=2147483647;
			cheapestcount=0;
			
			for(base=2;base<37;base++){
				total=0;
				k=x;
			
				while(k>0){
					total+=cost[k%base];
					k/=base;
				}
				if(total<min){
					min=total;
					cheapestlist[0]=base;
					cheapestcount=1;
				}else if(total==min){
					cheapestlist[cheapestcount++]=base;
				}
			}
			printf("Cheapest base(s) for number %d:",x);
			
			for(base=0;base<cheapestcount;base++){
				printf(" %d",cheapestlist[base]);
			}
			printf("\n");	
		}
		if(cs<n) printf("\n");
	}
	
	
	return 0;
}
