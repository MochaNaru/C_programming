// ��ǻ�Ͱ��к� 202395030 ������ 

#include <stdio.h> 

int main(void)
{
	int opt ;
	double num1, num2 ;
	double result ;
	
	printf("1.���� 2.���� 3.���� 4.������ \n");
	printf("����? ");
	scanf("%d", &opt);
	if ( 1 <= opt && opt <= 4) // && �����ڸ� ����ؼ� �ΰ��� ���� ��θ� �����ؾ� �۵� 
	{
	printf("�� ���� ���� �Է� : ") ;
	scanf("%lf %lf", &num1, &num2) ;
	
		// %f �� �Ҽ����� 6�ڸ����� �ڵ���� %g �� �Ҽ����� �ʿ��Ѱͱ����� ��� 
		
		if (opt == 1)
			result = num1 + num2 ;

		else if (opt == 2)
			result = num1 - num2 ;
			
		else if (opt == 3)
			result = num1 * num2 ;

		else if (opt == 4)
			result = num1 / num2 ;
			
		printf("��� : %g \n", result) ;

	}
	else 
		printf("�����Ҽ�����.") ; 
	
	return 0;
}
