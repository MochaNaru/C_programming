// 컴퓨터공학부 202395030 정성욱 

#include <stdio.h> 

int main(void)
{
	double x, y ;
	char op ;
	double result = 0 ;
	
	printf("수식? (예시 1.5 + 2.0): ") ;
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
			printf("잘못 선택하셨습니다.\n") ;
			break ;
	}
	
	printf("%g %c %g = %g\n", x, op, y, result) ;
	
	return 0 ;
}
