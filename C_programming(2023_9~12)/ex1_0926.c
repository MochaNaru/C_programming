#include <stdio.h> 

int main(void)
{
	int n1, n2 ;
	
	printf("�� �� �Է�(��, ���ڸ� ����) : ");
	scanf("%d %d", &n1, &n2);
	
	printf("%d & %d = %d\n",n1, n2, n1 & n2);
	printf("%d | %d = %d\n", n1, n2, n1 | n2);
	printf("%d ^ %d = %d\n",n1, n2, n1 ^ n2);
	printf("~%d = %d\n",n1, ~n1);
	
	return 0;
}
