#include<stdio.h>

int main(){
	int x,y,a,b,n,temp;
	
	while(scanf("%d %d",&x,&y)!=EOF){
		
		if(y>x){
			a=x;
			b=y;
		}else{
			a=y;
			b=x;
		}
	
		int num=0;
		for(int i=a;i<=b;i++){
			n=1;
			temp=i;
			while(temp!=1){
				n++;
				if(temp % 2==1){
					temp =3*temp+1;
				}else{
					temp=temp/2;
				}
			}

			if(num<n) {
				num=n;
			}
		}
		printf("%d %d %d\n",a,b,num);
	}
	
	return 0;
}
