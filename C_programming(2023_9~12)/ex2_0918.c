#include <stdio.h>

int main(){
	int a;
	float b;
	
	a = 13;
	b = 123.15;
	
	printf("13의 8진수 : %#o, 13의 16진수 : %X\n", a, a);
	printf("0.152 의 고정소수점과 부동소수점 : %f, %e\n", b, b); 
	
	return 0;
}
