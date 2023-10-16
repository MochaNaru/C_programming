#include <stdio.h>

int main(void) {
	int a = 100;
	printf("int의 크기\t\t ==>  %d\n", sizeof(int));
	printf("long int	의 크기: %d\n", sizeof(long int));
	printf("double	의 크기: %d\n", sizeof(double));
	printf("char	의 크기: %d\n", sizeof(char));
	printf("short	의 크기: %d\n", sizeof(short));
	
	printf("int a형의 크기\t\t ==>  %d\n", sizeof(a));
	printf("3.14의 크기\t\t ==>  %d\n", sizeof(3.14)); 
}
