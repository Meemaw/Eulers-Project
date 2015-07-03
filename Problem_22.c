#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct list{
	char** znaki;
	int steviloElementov;
} list;


int cmpfunc(const void *a, const void *b) {
	const char *pa = *(const char**)a;
	const char *pb = *(const char**)b;
	return strcmp(pa,pb);
}


int vrednostCrke(char c) {
	return c - 'A' + 1;
}


int main() {



	FILE *odpri;
	odpri = fopen("names.txt", "r");
	if(odpri == NULL) {
		fclose(odpri);
		printf("ERROR READING FILE \n");
		return 0;
	}
	list vsaImena;
	vsaImena.znaki = malloc(10000*sizeof(char*));
	vsaImena.steviloElementov = 0;



	char c;
	while((c = fgetc(odpri)) != EOF ) {
		if(c == '\"') {
			char* trenutnaBeseda = malloc(20*sizeof(char));
			int indeks = 0;
			while((c = fgetc(odpri)) != '\"') {
				trenutnaBeseda[indeks++] = c;
			}
			trenutnaBeseda[indeks] = '\0';
			vsaImena.znaki[vsaImena.steviloElementov++] = trenutnaBeseda;
		}
	}

	qsort(vsaImena.znaki, vsaImena.steviloElementov, sizeof(char*), cmpfunc);

	long long vsota = 0;
	int i;
	int n;
	int pristej;
	for(i = 0; i < vsaImena.steviloElementov; i++) {
		char* trenutna = vsaImena.znaki[i];
		int dolzinaBesede = strlen(trenutna);
		pristej = 0;
		for(n = 0; n < dolzinaBesede; n++) {
			pristej += vrednostCrke(trenutna[n]);
		}
		pristej *= (i+1);
		vsota += pristej;
	}
	printf("Total of all the name scores in file names.txt is:\n");
	printf("%lld\n", vsota);







	return 0;
}