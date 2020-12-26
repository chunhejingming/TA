#include<stdio.h>

int max(int s1,int s2,int s3 ){
   if(s1>s2&&s1>s3){
	return s1*s1;
   }	
   if(s2>s1&&s2>s3){
   	return s2*s2;
   }
   if(s3>s1&&s3>s2){
   	return s3*s3;
   }
}
 int min(int b1,int b2,int b3 ){
   if(b1>b2&&b1>b3){
	return b2*b2+b3*b3;
   }	
   if(b2>b1&&b2>b3){
   	return b1*b1+b3*b3;
   }
   if(b3>b1&&b3>b2){
   	return b1*b1+b2*b2;
   }
}

int main(){
int n;
scanf("%d",&n);
for(int m=0;m<n;m++){
	
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a>0&&b>0&&c>0&&(a+b>c)&&(a+c>b)&&(c+b>a)){

int x=max(a,b,c);
int  y=min(a,b,c);
if(x==y){printf("Yes\n");
}
else printf("No\n");

} 
else printf("No\n");
}

return 0;
} 
