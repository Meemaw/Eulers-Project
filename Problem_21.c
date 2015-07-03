#include<stdio.h>

int vsotaDeljiteljev(int stevilo) {
	int i;
	int vsota = 0;
	for(i = 1; i < stevilo/2 + 1; i++) {
		if(stevilo % i == 0) {
			vsota += i;
		}
	}
	return vsota;
}




int main() {

	int meja;
	printf("Please insert upper bound:\n");
	scanf("%d" , &meja);
	int tabela[meja];
	int n;
	for(n = 0; n < meja; n++) {
		tabela[n] = 0;
	}

	int i;
	int vsota = 0;
	for(i = 1; i < meja; i++) {
		int delitelji = vsotaDeljiteljev(i);
		if(i != delitelji && i == vsotaDeljiteljev(delitelji) && tabela[i] != 1) {
			vsota += i + delitelji;
			tabela[i] = 1;
			tabela[delitelji] = 1;
		}
	}

	
	if(vsota == 0) {
		printf("There are no amicable numbers below %d\n", meja);
		return 0;
	}
	printf("Sum of the amicable numbers below %d is:\n", meja);
	printf("%d\n", vsota);








	return 0;
}