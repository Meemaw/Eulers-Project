#include<stdio.h>
#include<string.h>


int isPalindrome(char* stevilo) {
	int n = strlen(stevilo);
	int zacetek = 0;
	int konec = n-1;
	while(zacetek <= konec) {
		if(stevilo[zacetek] != stevilo[konec]) {
			return 0;
		}
		zacetek++;
		konec--;
	}
	return 1;
}


int main() {



	char str[20];

	int x;
	int i;
	int max = 0;
	int produkt;
	for(i = 999; i >= 1; i--) {
		for(x = 999; x >= 1; x--) {
			produkt = i*x;
			if(produkt > max) {
				sprintf(str, "%d", produkt);
				if(isPalindrome(str)) {
					max = produkt;
				}
			}
		}
	}
	printf("Largest palindrome number from the product of two 3-digit numbers:\n");
	printf("%d\n", max);
}