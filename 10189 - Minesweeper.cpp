#include<stdio.h>

int n,m;
char field[105][105];

void fill(int x,int y){
	int i,j;
	for(i=-1;i<=1;i++){
		for(j=-1;j<=1;j++){
			if(field[x+i][y+j] !='*'){
				field[x+i][y+j]++;
			}
		}
	}
}

int main(){
	int t=1,i,j;
	
	while(scanf("%d %d",&n,&m)){
		if(!n && !m){
			break;
		}
		if(t!=1){
			printf("\n");
		}
		
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				field[i][j]='0';
			}
		}
		
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				char c;
				c=getchar();
				while(c=='\n') {
					c=getchar();
				}
				if(c=='*'){
					field[i][j]='*';
					fill(i,j);
				}
			}
		}
		
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				printf("%c",field[i][j]);
			}
			printf("\n");
		}
		
	}
	
	return 0;
} 
