#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    if(n<=20&&n>=1){
       int a[n],b[n];
       int i;
       for( i=0;i<n;i++){
	       scanf("%d",&a[i]);
        }
       for(int j=0;j<n;j++){
	       if(a[j]<0){
	       b[j]=-a[j];	
	       }
	       else b[j]=a[j];
        }
       int y=b[0];
       int c;
       for(int x=0;x<n;x++){
        	if(y>=b[x]){continue;}
        	else y=b[x];c=x;
		}
	    printf("%d",a[c]);
    }
	
return 0;
}
