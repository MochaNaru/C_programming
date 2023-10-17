// 컴퓨터공학부 202395030 정성욱 

#include <stdio.h> 

int main(void){
	int age, height ;
	
	printf("나이를 입력하세요.  : ") ;
	scanf("%d", &age) ;
	
	if (age >= 9 ) 	
	{
		printf("키를 입력하세요.  : ") ;
		scanf("%d", &height) ; 
			
		if (height < 130 ) 
			printf("저속 롤러코스터 입장 가능") ;
			
		else 
			printf("고속 롤러코스터 입장 가능") ;
	}	
	else 
		printf("입장 불가 ! ") ;
		
	return 0 ;
}
