#include <stdio.h>

int main(void)
{
	int a;
	
	printf("정수 하나 입력 :  ");
	scanf("%d, &a");
	
	printf("a > 100 && a < 200 ==> %d\n",a > 100 && a < 200);
	printf("a > 100 || a < 200 ==> %d\n",a > 100 || a < 200);
	printf("!(a==b) ==> %d\n",!(a==b));
	
	return 0;
}
