#include<iostream>
#include<algorithm>
using namespace std;

int a[10001],n,m;
bool comp(int x,int y){
	int xodd=abs(x%2); 
	int	yodd=abs(y%2);
	
	if(x%m!=y%m) return x%m<y%m;
	if(xodd!=yodd) return xodd;
	if(xodd) return x>y;
	return x<y;
	
}

int main(){
	while(scanf("%d %d",&n,&m)){
		if(n==0){
			break;
		}
		for(int k=0;k<n;k++){
			scanf("%d",&a[k]);
		}
		sort(a,a+n,comp);
		for(int k=0;k<n;k++){
			printf("%d\n",a[k]);
		} 
	}
	
	return 0;
}
