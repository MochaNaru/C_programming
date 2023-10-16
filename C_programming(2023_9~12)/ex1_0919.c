#include <stdio.h>

int main(){
	
	int num1;
	int num2;
	
	printf("숫자를 2개 입력하세요 : ");
	scanf("%d %d", &num1, &num2);
	
	printf("산술연산 결과\n\n");
	printf("%d + %d = %d\n",num1, num2, num1 + num2);
	printf("%d - %d = %d\n",num1, num2, num1 - num2);
	printf("%d * %d = %d\n",num1, num2, num1 * num2);
	printf("%d / %d = %.3f\n",num1, num2, (float)num1 / num2);
	printf("%d %% %d = %d\n",num1, num2, num1 % num2);
	
}
