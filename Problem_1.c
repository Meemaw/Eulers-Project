#include<stdio.h>


int multiple(int stevilo) {
	if(stevilo % 3 == 0 || stevilo % 5 == 0) {
		return 1;
	}
	return 0;
}


int main() {

	int vsota = 0;
	int meja;
	printf("Please insert upper bound:\n");
	scanf("%d", &meja);
	for(int i = 1; i < meja; i++) {
		if(multiple(i)) {
			vsota+=i;
		}
	}
	printf("The sum of all the multiples of 3 and 5 below %d is:\n" , meja);
	printf("%d\n", vsota);




	return 0;
}