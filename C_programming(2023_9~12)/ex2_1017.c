// ��ǻ�Ͱ��к� 202395030 ������ 

#include <stdio.h> 

int main(void){
	int i ;
	int sum ;
	
	for (i = 0; i < 1000; i++)
		if ((i+1) % 2 == 1) {
		printf("�ȳ��ϼ���. %4d��° C�Դϴ�.\n",i+1) ;
		sum = sum + (i+1) ;
		}

	printf("\n\n sum =%d \n", sum) ;

	return 0 ;
}
