#include<stdio.h>
#include<stdlib.h>
#define levo 1
#define dol 2
#define desno 3
#define gor 4


int n;

void printaj(int** tabela) {
	int i,x;
	for(i = 0; i < n; i++) {
		for(x = 0; x < n; x++) {
			printf("%d ", tabela[i][x]);
		}
		printf("\n");
	}
	printf("\n");
}




void zgradiTabelo(int **tabela) {
	int sirina = n;
	int visina = 0;
	int vnesi = n*n;
	int i,x;
	int smer = levo;
	while(1) {




		while(smer == levo && sirina - 1 >= 0 && tabela[visina][sirina-1] == 0) {
			sirina--;
			tabela[visina][sirina] = vnesi;
			vnesi--;
			//printaj(tabela);
		}
		if(sirina - 1 < 0 || (sirina - 1 >= 0 &&tabela[visina][sirina-1] != 0)) {
			smer = dol;
		}

		while(smer == dol && visina +1  < n && tabela[visina+1][sirina] == 0) {
			visina++;
			tabela[visina][sirina] = vnesi;
			vnesi--;
			//printaj(tabela);
		}
		if(visina +1 >= n || (visina+1 < n && tabela[visina+1][sirina] != 0)) {
			smer = desno;
		}

		while(smer == desno && sirina +1  < n && tabela[visina][sirina+1] == 0) {
			sirina++;
			tabela[visina][sirina] = vnesi;
			vnesi--;
			//printaj(tabela);
		}
		if(sirina +1 >= n || (sirina + 1 < n &&tabela[visina][sirina+1] != 0)) {
			smer = gor;
		}

		while(smer == gor && visina - 1  >= 0 && tabela[visina-1][sirina] == 0) {
			visina--;
			tabela[visina][sirina] = vnesi;
			vnesi--;
			//printaj(tabela);
		}
		if(visina - 1 >= 0 || (visina -1 >= 0 && tabela[visina-1][sirina] != 0)) {
			smer = levo;
		}
		if(vnesi == 0) {
			break;
		}
	}


}

void naNic(int** tabela) {
	int i,x;
	for(i = 0; i < n; i++) {
		for(x = 0; x < n; x++) {
			tabela[i][x] = 0;
		}
	}
}

long zracunajDiagonale(int** tabela) {
	int prva = 0;
	for(int i = 0; i < n;) {
		prva += tabela[i][i];
		i++;
	}
	int druga = 0;
	int visina = 0;
	for(int i = n-1; i >= 0;) {
		druga += tabela[visina][i];
		i--;
		visina++;
	}
	return prva+druga-1;
}


int main() {
	printf("Please insert size of grid in spiral:\n");
	scanf("%d", &n);
	int** tabela;
	tabela = (int**)malloc(n*sizeof(int*));
	int i;
	for(i = 0; i < n; i++) {
		tabela[i] = (int*)malloc(n*sizeof(int));
	}
	naNic(tabela);
	zgradiTabelo(tabela);
	int rezultat = zracunajDiagonale(tabela);
	printf("Sum of the numbers on the diagonals:\n");
	printf("%d\n", rezultat);



	return 0;
}