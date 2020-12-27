#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m=n%2;
    if(n>6&&m==0){
       int i;
       for(i=3;i<=n/2;i++){
            int r=0,q;
       	   for( q=3;q<i;q++){
       	   	 if(i%q==0){break;}
             else r++;
			  }
		   if(r==i-3){
			  
	       int j=i%2;
	       int x=n-i;
	       
	       if(j==1){
	       int p=0,y;
	       	  for( y=2;y<x;y++){
	       	  	 if(x%y==0){
	       	  	 	 break;
					  }
				 else	p++;
				 }
			  	if(p==x-2){
			  	printf("%d %d\n",i,x); }
			  }
		 
	       }
        }
	
   }
   else printf("ERROR");
	
	
	
	return 0;
}
