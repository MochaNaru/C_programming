// ��ǻ�Ͱ��к� 202395030 ������ 

#include <stdio.h> 

int main(void){
	int age, height ;
	
	printf("���̸� �Է��ϼ���.  : ") ;
	scanf("%d", &age) ;
	
	if (age >= 9 ) 	
	{
		printf("Ű�� �Է��ϼ���.  : ") ;
		scanf("%d", &height) ; 
			
		if (height < 130 ) 
			printf("���� �ѷ��ڽ��� ���� ����") ;
			
		else 
			printf("��� �ѷ��ڽ��� ���� ����") ;
	}	
	else 
		printf("���� �Ұ� ! ") ;
		
	return 0 ;
}
