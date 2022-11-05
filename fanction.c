#include "fanction.h"

int conv_bin_num(char x[], size_t stlen) {
	int f_digit;
	int y, z;
	int count = 0;
	z = 0;
	for (i = stlen - 1; i >= 0; i--) {
		y = 0;
		if (x[i] != '0') {
			y = 1;
			for (k = 0; k < count; k++) {
				y *= 2;	
			}
		}
		count++;
		z += y;
	}
return z;	
}


int conv_hexa(char x[], size_t stlen) {
	char alpha[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', '\0'};
	int y, z;
	int a;
	int count = 0;
	z = 0;
	for (i = stlen - 1; i >= 0; i--) {
		y = 0;
		if (x[i] != '0') {
			for (k = 0; k < 16; k++) {
				if (x[i] == alpha[k]) {
					a = k;	
					break;
				}
			}
			y = 1;
			for (j = 0; j < count; j++) {
				y *= 16;	
			}					
			y *= a;
		}			
		count++;
		z += y;
	}	
return z;	
}
