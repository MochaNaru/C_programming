// 컴퓨터공학부 202395030 정성욱 

#include <stdio.h> 

int main(void)
{
	int opt ;
	double num1, num2 ;
	double result ;
	
	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
	printf("선택? ");
	scanf("%d", &opt);
	if ( 1 <= opt && opt <= 4) // && 연산자를 사용해서 두개의 조건 모두를 만족해야 작동 
	{
	printf("두 개의 정수 입력 : ") ;
	scanf("%lf %lf", &num1, &num2) ;
	
		// %f 는 소수점을 6자리까지 자동출력 %g 는 소수점을 필요한것까지만 출력 
		
		if (opt == 1)
			result = num1 + num2 ;

		else if (opt == 2)
			result = num1 - num2 ;
			
		else if (opt == 3)
			result = num1 * num2 ;

		else if (opt == 4)
			result = num1 / num2 ;
			
		printf("결과 : %g \n", result) ;

	}
	else 
		printf("연산할수없음.") ; 
	
	return 0;
}
