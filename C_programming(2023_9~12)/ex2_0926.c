#include <stdio.h> 

int main(void)
{
	
	int x, y, z;
	int min1, min2;
	
	printf("정수 세개를 입력 : ");
	scanf("%d %d %d",&x, &y, &z);
	
	min1 = x < y ? x : y ;
	
	min2 = min1 < z ? min1 : z ;
	
	printf("%d %d %d 중에 가장 작은 수는 : %d \n", x, y, z, min2);
	
	return 0 ;
}
