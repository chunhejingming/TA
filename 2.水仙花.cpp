#include<stdio.h>
int main(){
	int i;
	scanf("%d",&i);
	int x,y;
	int z=0;
	for(int j=0;j<i;j++){
		scanf("%d %d",&x,&y);
		for(;x<=y;x++){
			int a=x/100;
			int b=(x/10)%10;
			int c=x%10;
			if(x==a*a*a+b*b*b+c*c*c){
				printf("%d ",x);
				z++;	
			}
		}
		if(z==0){
			printf("-1");
		}
		printf("\n");
		
		
		
		
		
	}
	
	return 0;
} 
