#include <stdio.h>

int main(void) {
	int a = 100;
	printf("int�� ũ��\t\t ==>  %d\n", sizeof(int));
	printf("long int	�� ũ��: %d\n", sizeof(long int));
	printf("double	�� ũ��: %d\n", sizeof(double));
	printf("char	�� ũ��: %d\n", sizeof(char));
	printf("short	�� ũ��: %d\n", sizeof(short));
	
	printf("int a���� ũ��\t\t ==>  %d\n", sizeof(a));
	printf("3.14�� ũ��\t\t ==>  %d\n", sizeof(3.14)); 
}
