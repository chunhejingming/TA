#include <stdio.h>
int main(void){
	int a;
	
	printf("����������һ���꼶��\n"
	       "A.��һ    B.���\n"
	        "C.����    D.����\n");
	scanf("%c",&a);
	switch(a){
	case 'A':
		printf("���ã��Ĵ���ѧ��һѧ��");
		break;
	case 'B':
	    printf("���ã��Ĵ���ѧ���ѧ��");
		break;
	case 'C':
	    printf("���ã��Ĵ���ѧ����ѧ��");
		break;
    case 'D':
	    printf("���ã��Ĵ���ѧ����ѧ��");
		break;
	default:
	    printf("��������ȷ���");
		break; 
	}
	        return 0;
}
