//컴퓨터 공학부 202395030 정성욱

#include <stdio.h> 

int main(void)
{
	double num ;
	
	printf("실수? : ");
	scanf("%lf", &num);
	
	printf("%e의 제곱 : \n",num * num);
	printf("%e의 세제곱 : \n",num * num * num);
	
	return 0;
}
