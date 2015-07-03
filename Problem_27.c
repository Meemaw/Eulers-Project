#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int formula(int stevilo, int a, int b) {
	return abs(stevilo*stevilo + a*stevilo +b);
}

int isPrime(int stevilo) {
	int i;
	int meja = (int)sqrt(stevilo) + 1;
	if(stevilo > 2 && stevilo % 2 == 0) {
		return 0;
	}
	for(i = 3; i < meja; i+=2) {
		if(stevilo % i == 0) {
			return 0;
		}
	}
	return 1;
}


int main() {



	int i,j,vrednost;
	int max = 0;
	int temp = 0;
	int prviKoef = 0;
	int drugiKoef = 0;
	for(i = -999; i <= 999;i++) {
		for(j = -999; j <= 999; j++) {
			temp = 0;
			while(isPrime(formula(temp,i,j))) {
				temp++;
				if(temp > max) {
					max = temp;
					prviKoef=i;
					drugiKoef=j;
				}
			}
		}
	}
	printf("Produced equation: n^2 %dn + %d\n", prviKoef,drugiKoef);
	printf("Product of its coefficients:\n");
	printf("%d\n", prviKoef*drugiKoef);
	printf("Produces primes for consecutive values from 0-%d\n", max);








	return 0;
}