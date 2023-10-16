#include <stdio.h>

int main(void)
{
	int x ;
	
	printf("정수 1개를 입력하시오. : ") ;
	scanf("%d", &x) ;
	
	if (x % 3 == 0 && x % 5 == 0) 
		printf("두 수의 배수이다.") ;
	
	else
		printf("두 수의 배수가 아니다.") ;
		
	return 0 ;
}
