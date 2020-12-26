#include<stdio.h>
#include<string.h>
int main(){
int n;
char s1[501],s2[501];
int a[501],b[501];
scanf("%d",&n);
int i=0;
for(;i<n;i++){
	int c[1002]={0};
scanf("%s %s",s1,s2);
int x=strlen(s1)-1;
int y=strlen(s2)-1;
int p=x+y+1;
for(int r=0;r<=x;r++) {a[r]=s1[r]-'0';}
for(int e=0;e<=y;e++) {b[e]=s2[e]-'0';}
int j,k;

for(j=0;j<=x;j++){
	for(k=0;k<=y;k++){
c[x+y-j-k]+=a[x-j]*b[y-k];

}
}
for(int q=p-1;q>0;q--){
	if(c[q]>=10){
	c[q-1]+=c[q]/10;
	c[q]%=10;	
	}
}
for(int w=0;w<=x+y;w++){
	printf("%d",c[w]);
}
printf("\n");
}	
return 0;	
} 
