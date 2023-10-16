#include <stdio.h>

int main(){
	int num2, num8, num16;
	
	num2 = 0b1010010;
	num8 = 0121;
	num16 = 0x54;
	
	printf("0b1110 - > %-6d, 016 - > %3d, 0xE - > %d\n", num2, num8, num16);
//	printf("0b1010001 - > %c, 0121 - > %c, 0x51 - > %c\n", num2, num8, num16);
	
	return 0;
}
