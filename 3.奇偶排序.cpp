#include<stdio.h>
#include<string.h>
void sort(int l,int y,int s[][100]){
	int i=0;
	int j=0;
	int t=0;
	for(i=0;i<l-1;i++){
		for(j=0;j<l-i-1;j++){
			if(s[y][j]>s[y][j+1]){
				t=s[y][j+1];
				s[y][j+1]=s[y][j];
				s[y][j]=s[y][j+1];
			}	
		}
	}		
}
int main(){
    int x;
    scanf("%d",&x);
    char a[x][100];
	int  j[x][100];
	int  o[x][100];
	int  A=0,B=0;
    for(int y=0;y<x;y++){
    	
		getchar();
		gets(a[y]);
		
		int n1=strlen(a[y]);
	    int m=0;
		for( m=0;m<n1;m+=2){
			if((a[y][m]-'0')%2==1){
				j[y][A]=a[y][m]-'0';
				A++;
			}
			 if((a[y][m]-'0')%2!=1){
			 o[y][B]=a[y][m]-'0';
			 B++;
			 }
			    
		}
		sort(A,y,j[y][A-1]);
		sort(B,y,o[y][B-1]);
		for(int n4=0;n4<A;n4++){
			printf("%d ",j[y][n4]);
		}
		for(int n5=0;n5<B;n5++){
			printf("%d ",o[y][n5]);
		}
		printf("\n");
		 	
	}
    	
    	
    return 0;	
	}

