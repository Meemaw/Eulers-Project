#include<stdio.h>
#include<stdlib.h>



int main() {


	int meja;
	printf("Please insert the upper bound:\n");
	scanf("%d", &meja);

	int i;
	int sumOfSquares = 0;
	int squareOfSum = 0;
	for(i = 1; i <= meja; i++) {
		sumOfSquares += i*i;
		squareOfSum += i;
	}
	squareOfSum *= squareOfSum;
	printf("The difference between the sum of the squares of the first %d natural numbers and the square of the sum is:\n", meja);
	printf("%d\n", abs(sumOfSquares - squareOfSum));




	return 0;
}