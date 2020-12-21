#include<stdio.h>
#include<math.h>

int main(){
	int a,b,sq,i;
	
	while(scanf("%d %d",&a,&b)){
		int cnt=0;
		if(a == 0 && b == 0) {
			break;
		}
		
		for(i=a;i<=b;i++){
			sq =sqrt(i);
			if(sq*sq ==i){
				cnt++;
			}
		}
		printf("%d\n",cnt);
		
	}
	
	return 0;
}
