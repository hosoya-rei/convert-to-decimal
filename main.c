#include "fanction.h"


int main(void) {
	char hexa[16];
	char binary[16];
	int h_or_b;
	size_t stlen;
	
	printf("16進数を10進数へ:1, 2進数を10進数へ:2=>"); scanf("%d", &h_or_b);

	if (h_or_b > 2 || h_or_b < 1) {
		printf("不正な数値です。\n");
	}else if (h_or_b == 1) {
		//player入力
		printf("10進数の値を入力＊小文字で！＊=>"); scanf("%s", hexa);
		//stlenへ代入
		stlen = strlen(hexa);		
		printf("%d\n", conv_hexa(hexa, stlen));
	}else {
		//player入力
		printf("2進数の値を入力=>"); scanf("%s", binary);
		//stlenへ代入
		stlen = strlen(binary);
		printf("%d\n", conv_bin_num(binary, stlen));
	}

return 0;
}



