#include<stdio.h>

int main(){
	int t,day,p,hartals,cnt;
	int n[100];
	
	scanf("%d",&t);
	while(t--){
		scanf("%d",&day);
		scanf("%d",&p);
		
		for(int i=0;i<p;i++){
			scanf("%d",&n[i]);
		}
		cnt=0;
		for(int i=1;i<=day;i++){
			
			if(i%7>=1 && i%7<=5){
				hartals=0;
				
				for(int j=0;j<p;j++){
					
					hartals = hartals || (i%n[j]==0);
					
				}
				cnt+=hartals;
			}
		}
		printf("%d\n",cnt);
	}
	
	
	return 0;
}
