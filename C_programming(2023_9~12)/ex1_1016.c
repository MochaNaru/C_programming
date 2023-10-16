// 컴퓨터공학부 202395030 정성욱 

#include <stdio.h> 

int main(void)
{
	int num ;
	 
	printf("정수? : ") ;
	scanf("%d", &num) ;
	 
	if (num == 0)
	 	printf("0입니다. \n"); // 입력받은 숫자가 0이면 출력 
	 	
	else if (num > 0)
		printf("양수입니다.\n"); // 입력받은 숫자가 0보다 크면 출력 
		
	else 
		printf("음수입니다.\n"); // 위의조건이 아닐시 (0보다작다) 출력 
	
	return 0;
}
