#include<stdio.h>
#include<string.h>

int main(){
int n;
scanf("%d",&n);
char a[n][100];

for(int m=0;m<n;m++){
	scanf("%s",&a[m]);}
for(int q=0;q<n;q++){
	
	int j=strlen(a[q])-1;
    int i;
	for(i=0;i<j;i++){
		if(a[q][i]!=a[q][j]){break;}
		else j--; 
	}if(i==j||j==i-1){printf("YES\n");}
	else printf("NO\n");

}
return 0;
} 
