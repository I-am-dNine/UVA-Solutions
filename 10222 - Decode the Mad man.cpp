#include<stdio.h>
#include<ctype.h>

int main(){
	char str[]="qwertyuiop[]asdfghjkl;'\zxcvbnm,./'";
	char a;
	
	while(scanf("%c",&a)!= EOF){
		a = tolower(a);
		
		if(isspace(a))printf(" ");
		else
		{
			for(int i=0;str[i];i++){		//use loop find until get the word then -2 for the decode
				if(a==str[i]){
					printf("%c",str[i-2]);
					break;
				}
			}
		}
	}
	return 0;
}
