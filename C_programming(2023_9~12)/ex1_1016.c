// ��ǻ�Ͱ��к� 202395030 ������ 

#include <stdio.h> 

int main(void)
{
	int num ;
	 
	printf("����? : ") ;
	scanf("%d", &num) ;
	 
	if (num == 0)
	 	printf("0�Դϴ�. \n"); // �Է¹��� ���ڰ� 0�̸� ��� 
	 	
	else if (num > 0)
		printf("����Դϴ�.\n"); // �Է¹��� ���ڰ� 0���� ũ�� ��� 
		
	else 
		printf("�����Դϴ�.\n"); // ���������� �ƴҽ� (0�����۴�) ��� 
	
	return 0;
}
