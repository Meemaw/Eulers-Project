#include<stdio.h>

int isEven(int stevilo) {
	if(stevilo % 2 == 0) {
		return 1;
	}
	return 0;
}


int main() {

	int firstNumber = 1;
	int secondNumber = 2;
	int meja;
	int vsota = 2;
	printf("Please insert upper bound:\n");
	scanf("%d", &meja);
	while(secondNumber <= meja) {
		int nextNumber = firstNumber + secondNumber;
		if(isEven(nextNumber)) {
			vsota += nextNumber;
		}
		firstNumber = secondNumber;
		secondNumber = nextNumber;
	}
	printf("The sum of the even-valued terms whose values does not exceed %d is:\n" , meja);
	printf("%d\n", vsota);






	return 0;
}