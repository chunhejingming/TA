#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	double x,y;
	int g,h,j;
	printf("按照  Ax+By=C;Dx+Ey=F  的格式输入方程组");
	scanf("%dx+%dy=%d;%dx+%dy=%d",&a,&b,&c,&d,&e,&f);
	g=c*e-b*f;
	h=a*f-c*d;
	j=a*e-b*d;
	y=h/j;
	x=g/j;
	printf("x=%.2f y=%.2f",x,y);
	return 0; 
} 
