#include<stdio.h>
#include<string.h>
int main(){
int m;
scanf("%d",&m);
char  a[200];
getchar();
gets (a);	
int  n=strlen(a);
int i=0;
int j=0;
int k=n;
while(n-->0){

if(i<=m-1){
printf("%c",a[k-m+i]);i++;}
else {

printf("%c",a[j]);j++;}
}
return 0;
}
