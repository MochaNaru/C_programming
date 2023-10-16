// 컴퓨터공학부 202395030 정성욱 

#include <stdio.h> 

int main(void)
{
	int num ;
	
	printf("몇월인지 입력하세요 : ") ;
	scanf("%d", &num) ;
	
	switch (num) {
		case 3 : case 4 : case 5 :
			printf("봄 입니다.") ;
			break;
			
		case 6 : case 7 : case 8 :
			printf("여름 입니다.") ;
			break;
		
		case 9 : case 10 : case 11 :
			printf("가을 입니다.") ;
			break;
			
		case 12 : case 1 : case 2 :
			printf("겨울 입니다.") ;
			break;
			
		default :
			printf("잘못된 숫자입니다. 다시 입력하세요.\n") ;
			break ;
	}	
	
	return 0 ;
}
