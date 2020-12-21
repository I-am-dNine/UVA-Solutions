#include<stdio.h>

int str_to_int(){
	int n=0;
	char s[32];
	
	scanf("%s",s);
	for(int i=0;s[i]!='\0';i++){
		n=n*2+(s[i]-'0');
	}
	return n;
}
int main(){
	int n,x,y,z;
	
	
	scanf("%d",&n);
	

		for(int i=1;i<=n;i++){
			x=str_to_int();
			y=str_to_int();
			
			while(y>0){
				z=x%y;
				x=y;
				y=z;
			}
			if(x>1){
				printf("Pair #%d: All you need is love!\n",i);
			}else{
				printf("Pair #%d: Love is not all you need!\n",i);
			}		
		

		
	}
	
	
	return 0;
}
