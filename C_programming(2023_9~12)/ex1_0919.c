#include <stdio.h>

int main(){
	
	int num1;
	int num2;
	
	printf("���ڸ� 2�� �Է��ϼ��� : ");
	scanf("%d %d", &num1, &num2);
	
	printf("������� ���\n\n");
	printf("%d + %d = %d\n",num1, num2, num1 + num2);
	printf("%d - %d = %d\n",num1, num2, num1 - num2);
	printf("%d * %d = %d\n",num1, num2, num1 * num2);
	printf("%d / %d = %.3f\n",num1, num2, (float)num1 / num2);
	printf("%d %% %d = %d\n",num1, num2, num1 % num2);
	
}
