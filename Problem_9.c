#include<stdio.h>


int main() {


	for(int a = 1; a < 500	; a++) {
		for(int b = a+1; b < 500; b++) {
			for(int c = b+1; c < 500; c ++) {
				if(a+b+c == 1000 && (a*a + b*b == c*c)) {
					printf("A Pythagorean triplet for which a+b+c = 1000 is: %d  %d  %d, where its product is:\n", a,b,c);
					printf("%d\n", a*b*c);
					return 0;
				}
			}
		}
	}


	return 0;
}