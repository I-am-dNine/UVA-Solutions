#include<stdio.h>
#include<string.h>

char map[100][100];
int height, width;

int isSquare(int x,int y,int radius){
	int top,left,bottom,right,i,j;
	
	char ch=map[x][y];
	
	top=x-radius;
	bottom=x+radius;
	left=y-radius;
	right=y+radius;
	
	if(top<0 || bottom >=height || left<0 || right>=width) return 0;
	
	for(i=top;i<=bottom;i++){
		for(j=left;j<=right;j++){
			if(map[i][j]!=ch) return 0;
		}
	}
	return 1;
}

int main(){
	int i,t,x,y,radius,problem,p,n;
	
	scanf("%d",&problem);
	
	for(p=1;p<=problem;p++){
		scanf("%d%d%d\n",&height,&width,&n);
		for(i=0;i<height;i++){
			gets(map[i]);
		}
		printf("%d %d %d\n",height,width,n);
		
		for(t=1;t<=n;t++){
			scanf("%d %d",&x,&y);
			radius=0;
			while(isSquare(x,y,radius)){
				radius++;
			}
			printf("%d\n",radius*2-1);
		}
	}
	
	return 0;
}
