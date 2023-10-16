#include <stdio.h> 

int main(void)
{
	
	int money, num50, num10, num5, num1;
	
	printf("금액을 입력하세요 : ");
	scanf("%d", &money); 
	
	num50 = money / 50000 ;
	money = money % 50000 ;
	
	num10 = money / 10000;
	money = money % 10000;
	
	num5 = money / 5000;
	money = money % 5000;
	
	num1 = money / 1000;
	
	printf("5만원 : %d개\n",num50);
	printf("1만원 : %d개\n",num10);
	printf("5천원 : %d개\n",num5);
	printf("1천원 : %d개\n",num1);
		
	return 0 ;
}
