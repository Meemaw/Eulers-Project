#include<stdio.h>


int steviloDni(int mesec, int leto){
	if(mesec == 4 || mesec == 6 || mesec == 9 || mesec == 11) {
		return 30;
	}
	else if(mesec == 2) {
		if((leto % 4 == 0 && leto % 100 != 0) || (leto % 100 == 0 && leto % 400 == 0)) {
			return 29;
		}
		return 28;
	}
	return 31;
}


int main() {

	int i,j,x,dnevi;
	int steviloNedelj = 0;
	int dan = 1;
	for(i = 1901; i <= 2000; i++) {
		for(j = 1; j <= 12; j++) {
			dnevi = steviloDni(j,i);
			for(x = 1; x <= dnevi; x++) {
				dan++;
				if(dan % 7 == 0 && x == 1) {
					steviloNedelj++;
				}
			}
		}
	}
	printf("Number of sundays from 1 Jan 1901 to 31 Dec 2000 is:\n");
	printf("%d\n", steviloNedelj);









	return 0;
}