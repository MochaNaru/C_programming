// ��ǻ�Ͱ��к� 202395030 ������ 

#include <stdio.h> 

int main(void)
{
	int num ;
	
	printf("������� �Է��ϼ��� : ") ;
	scanf("%d", &num) ;
	
	switch (num) {
		case 3 : case 4 : case 5 :
			printf("�� �Դϴ�.") ;
			break;
			
		case 6 : case 7 : case 8 :
			printf("���� �Դϴ�.") ;
			break;
		
		case 9 : case 10 : case 11 :
			printf("���� �Դϴ�.") ;
			break;
			
		case 12 : case 1 : case 2 :
			printf("�ܿ� �Դϴ�.") ;
			break;
			
		default :
			printf("�߸��� �����Դϴ�. �ٽ� �Է��ϼ���.\n") ;
			break ;
	}	
	
	return 0 ;
}
