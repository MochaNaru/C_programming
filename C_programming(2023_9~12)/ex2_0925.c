//컴퓨터 공학부 202395030 정성욱

#include <stdio.h> 

int main(void)
{
	int KRW;
	int USD;
	double total;
	
	printf("KRW? ");
	scanf("%d", &KRW);
	
	printf("원/달러 환율? ");
	scanf("%d", &USD);
	
	total = (float)KRW / USD ;
	printf("KRW %d = USD %.2lf \n", KRW, total);
}
