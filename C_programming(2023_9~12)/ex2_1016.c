// ��ǻ�Ͱ��к� 202395030 ������ 

#include <stdio.h> 

int main(void)
{
	double x, y ;
	char op ;
	double result = 0 ;
	
	printf("����? (���� 1.5 + 2.0): ") ;
	scanf("%lf %c %lf", &x, &op, &y) ;
	
	switch (op){
		case '+' :
			result = x + y ;
			break ;
			
		case '-' :
			result = x - y ;
			break ;
		
		case '*' :
			result = x * y ;
			break ;
			
		case '/' :
			result = x / y ;
			break ;
			
		default :
			printf("�߸� �����ϼ̽��ϴ�.\n") ;
			break ;
	}
	
	printf("%g %c %g = %g\n", x, op, y, result) ;
	
	return 0 ;
}
