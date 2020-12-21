#include<stdio.h>
#include<string.h>

int main(){
	int m,n,x,y,x2,y2,dir,i;
	char c,inst[102];
	char orient[5]="ESWN";//dir index 0,1,2,3
	int move[4][2]={{1,0},{0,-1},{-1,0},{0,1}};
	int scent[51][51]={0};
	
	scanf("%d %d",&m,&n);
	while(scanf("%d %d %c",&x,&y,&c)!=EOF) {
		
		for(dir=0;dir<4;dir++){
			if(c==orient[dir]) break;
		}
		
		scanf("%s",inst);
		for(i=0;i<strlen(inst);i++){
			if(inst[i]=='F'){
				
				x2=x+move[dir][0];
				y2=y+move[dir][1];
				
				if(x2<0 ||y2<0 ||x2>m ||y2>n){
					if(scent[x][y]==0){
						scent[x][y]=1;
						
						printf("%d %d %c LOST\n",x,y,orient[dir]);
						break;
					}
				}else{
					x=x2;y=y2;
				}
			}else if(inst[i]=='R'){
				dir=(dir+1)%4;
			}else if(inst[i]=='L'){
				dir=(dir+3)%4;
			}
		}
		if(i==strlen(inst)){
			printf("%d %d %c\n",x,y,orient[dir]);
		}		
	}	
	return 0;
}
