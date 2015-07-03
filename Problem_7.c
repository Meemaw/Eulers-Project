#include<stdio.h>
#include<stdlib.h>
#include<math.h>

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

	int meja;
	printf("Please insert wanted prime number:\n");
	scanf("%d", &meja);
	int counter = 0;
	int stevilo = 2;
	while(1) {
		if(isPrime(stevilo)) {
			counter++;
		}
		if(counter == meja) {
			break;
		}
		stevilo++;
	}
	printf("The %d. prime number is:\n", meja);
	printf("%d\n", stevilo);







	return 0;
}