#include<stdio.h>
int age(int x,int y){
	if(x==1)
	  return 0;
	else return y+age(x-1,y);  	
}
int main(){
int n,a,k;	
scanf("%d %d %d",&n,&a,&k);
if((n>=2&&n<=100)&&(a>0&&a<=100)&&(k>0&&k<=100)){
int A;
A=a+age(n,k);
printf("%d\n",A);	
}
else printf("Wrong Number\n");	
return 0;	
}
