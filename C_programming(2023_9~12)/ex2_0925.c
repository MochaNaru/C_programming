//��ǻ�� ���к� 202395030 ������

#include <stdio.h> 

int main(void)
{
	int KRW;
	int USD;
	double total;
	
	printf("KRW? ");
	scanf("%d", &KRW);
	
	printf("��/�޷� ȯ��? ");
	scanf("%d", &USD);
	
	total = (float)KRW / USD ;
	printf("KRW %d = USD %.2lf \n", KRW, total);
}
