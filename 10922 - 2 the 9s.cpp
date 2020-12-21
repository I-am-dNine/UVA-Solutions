#include<stdio.h>
#include<string.h>

int main(){
	char s[1001];
	int num,sum,i,d;
	
	while(scanf("%s",s)!=EOF){
		
		if(strlen(s)==1 && s[0]=='0') break;
		
		num=0;
		
		for(i=0;s[i]!='\0';i++) num+=s[i]-'0';
		
		d=1;
		
		while(num>9){
			d++;
			sum=0;
			while(num>0){
				sum+=num%10;
				num/=10;
			}
			num=sum;
		}
		if(num==9){
			printf("%s is a multiple of 9 and has 9-degree %d.\n",s,d);
		}else{
			printf("%s is not a multiple of 9.\n",s);
		}
	}
	
	return 0;
}
