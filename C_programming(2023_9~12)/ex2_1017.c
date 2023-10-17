// 컴퓨터공학부 202395030 정성욱 

#include <stdio.h> 

int main(void){
	int i ;
	int sum ;
	
	for (i = 0; i < 1000; i++)
		if ((i+1) % 2 == 1) {
		printf("안녕하세요. %4d번째 C입니다.\n",i+1) ;
		sum = sum + (i+1) ;
		}

	printf("\n\n sum =%d \n", sum) ;

	return 0 ;
}
