#include <stdio.h>

int main(void)
{
	int x ;
	
	printf("���� 1���� �Է��Ͻÿ�. : ") ;
	scanf("%d", &x) ;
	
	if (x % 3 == 0 && x % 5 == 0) 
		printf("�� ���� ����̴�.") ;
	
	else
		printf("�� ���� ����� �ƴϴ�.") ;
		
	return 0 ;
}
