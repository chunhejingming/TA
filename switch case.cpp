#include <stdio.h>
int main(void){
	int a;
	
	printf("请问你是哪一个年级的\n"
	       "A.大一    B.大二\n"
	        "C.大三    D.大四\n");
	scanf("%c",&a);
	switch(a){
	case 'A':
		printf("您好，四川大学大一学生");
		break;
	case 'B':
	    printf("您好，四川大学大二学生");
		break;
	case 'C':
	    printf("您好，四川大学大三学生");
		break;
    case 'D':
	    printf("您好，四川大学大四学生");
		break;
	default:
	    printf("请输入正确结果");
		break; 
	}
	        return 0;
}
