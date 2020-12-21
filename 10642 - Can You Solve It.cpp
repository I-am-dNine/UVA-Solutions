#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		int x1,y1,x2,y2;
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		
		int pos1,pos2;
		
		pos1=(x1+y1+1)*(x1+y1)/2+x1;
		pos2=(x2+y2+1)*(x2+y2)/2+x2;
		
		printf("Case %d: %d\n",i,pos2-pos1);
	}
	
	return 0;
}
