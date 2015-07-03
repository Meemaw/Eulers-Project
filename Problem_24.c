#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int meja;

typedef struct list{
	char** znaki;
	int steviloElementov;
} list;

int contains(char* beseda, int c, int indeks){
	int i;
	for(i = 0; i < indeks; i++) {
		if(beseda[i] - '0' == c) {
			return 1;
		}
	}
	return 0;
}

int zeljeni;
list vseMoznosti;

void permutations(char* beseda, int indeks) {
	// base case --> ce pridemo do sem shranimo besedo in returnamo (koncamo rekurzijo)
 	if(indeks == meja+1) {
 		beseda[indeks] = '\0';
 		vseMoznosti.znaki[vseMoznosti.steviloElementov++] = beseda;
 		// ce imamo zeljeni element na tabeli ga printamo in exitamo
 		if(vseMoznosti.steviloElementov == zeljeni) {
 			printf("%s\n", vseMoznosti.znaki[zeljeni-1]);
 			exit(1);
 		}
 		return;
 	}
 	int i;
 	char* nova;
 	for(i = 0; i <= meja; i++) {
 		// ce se ne vsebuje trenutnega chara
 		if(!contains(beseda,i,indeks)) {
 			// naredimo novo besedo v katero prekopiramo staro in ji dodamo char
	 		nova = malloc(11*sizeof(char));
	 		strcpy(nova,beseda);
	 		sprintf(nova, "%s%d", nova, i);
	 		// z novo besedo klicemo rekurzijo --> indeks povecamo --> pride do base cesa ko je dovolj dolga
	 		permutations(nova,indeks+1);
 		}
 	}

}



int main() {
	printf("Please insert wanted lexicographic permutation: \n");
	scanf("%d", &zeljeni);
	printf("Please insert the upper digit bound for permutations:\n");
	scanf("%d", &meja);
	
	vseMoznosti.znaki = malloc(zeljeni*sizeof(char*));
	vseMoznosti.steviloElementov = 0;

	int indeks = 0;
	for(int i = 0; i <= meja; i++) {
		indeks = 0;
		char* trenutna = malloc(11*sizeof(char));
		sprintf(trenutna, "%d", i);
		permutations(trenutna, indeks+1);
	}
	printf("Wanted permutation doesnt exist\n");






	return 0;
}