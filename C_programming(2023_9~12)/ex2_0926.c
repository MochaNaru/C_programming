#include <stdio.h> 

int main(void)
{
	
	int x, y, z;
	int min1, min2;
	
	printf("���� ������ �Է� : ");
	scanf("%d %d %d",&x, &y, &z);
	
	min1 = x < y ? x : y ;
	
	min2 = min1 < z ? min1 : z ;
	
	printf("%d %d %d �߿� ���� ���� ���� : %d \n", x, y, z, min2);
	
	return 0 ;
}
