#include<stdio.h>
#include<stdlib.h>

int max(int a, int b) {
	return a > b ? a : b;
}

int maxSum(int** array, int globina, int i) {
	if(globina == 15) {
		return 0;
	}
	int maxLevo = maxSum(array, globina+1, i);
	int maxDesno = maxSum(array, globina+1, i+1);
	return max(maxLevo,maxDesno) + array[globina][i];
}

int main() {


		int** array;
		array = malloc(15*sizeof(int));
		int i;
		for(i = 0; i < 15; i++) {
			array[i] = (int*)malloc(sizeof(int));
		}
		int array1[] = {75};
		int array2[] = {95,64};
		int array3[] = {17,47,82};
		int array4[] = {18,35,87,10};
 		int array5[] = {20,4,82,47,65};
 		int array6[] = {19,1,23,75,3,34};
 		int array7[] = {88,2,77,73,7,63,67};
 		int array8[] = {99,65,4,28,6,16,70,92};
		int array9[] = {41,41,26,56,83,40,80,70,33};
		int array10[] = {41,48,72,33,47,32,37,16,94,29};
		int array11[] = {53,71,44,65,25,43,91,52,97,51,14};
		int array12[] = {70,11,33,28,77,73,17,78,39,68,17,57};
		int array13[] = {91,71,52,38,17,14,91,43,58,50,27,29,48};
		int array14[] = {63,66,4,68,89,53,67,30,73,16,69,87,40,31};
		int array15[] = {4,62,98,27,23,9,70,98,73,93,38,53,60,4,23};
		
		array[0] = array1;
		array[1] = array2;
		array[2] = array3;
		array[3] = array4;
		array[4] = array5;
		array[5] = array6;
		array[6] = array7;
		array[7] = array8;
		array[8] = array9;
		array[9] = array10;
		array[10] = array11;
		array[11] = array12;
		array[12] = array13;
		array[13] = array14;
		array[14] = array15;
		int steviloStolpcev = 15;


		int max = maxSum(array, 0, 0);
		
		printf("Maximum from top to the bottom of the triangle is:\n");
		printf("%d\n", max);














	return 0;
}