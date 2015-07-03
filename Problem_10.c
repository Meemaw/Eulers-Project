#include<stdio.h>
#include<math.h>


int isPrime(int stevilo) {
	if(stevilo > 2 && stevilo % 2 == 0) {
		return 0;
	}
	int i;
	int meja = (int)sqrt(stevilo) + 1;
	for(i = 3; i < meja; i+=2) {
		if(stevilo % i == 0) {
			return 0;
		}
	}
	return 1;
}



int main() {

	int stevilo = 2;
	long vsota = 0;
	int meja;
	printf("Please insert upper bound:\n");
	scanf("%d", &meja);
	while(stevilo < meja) {
		if(isPrime(stevilo)) {
			vsota += stevilo;
		}
		stevilo++;
	}

	printf("The sum of the primes below %d is:\n", meja);
	printf("%ld\n", vsota);










	return 0;
}