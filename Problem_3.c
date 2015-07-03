#include<stdio.h>


int main() {


	long stevilo;
	printf("Please insert a number:\n");
	scanf("%ld", &stevilo);
	long printaj = stevilo;

	int max = 0;
	int i;

	while(stevilo % 2 == 0) {
		stevilo /= 2;
		max = 2;
	}
	for(i = 3; i <= stevilo; i++) {
		while(stevilo % i == 0) {
			stevilo /= i;
			max = i;
		}
	}
	printf("The largest prime factor of number %ld is:\n", printaj);
	if(max == 0) {
		printf("Number %ld doesnt have prime factor\n", printaj);
		return 0;
	}
	printf("%d\n", max);





	return 0;
}