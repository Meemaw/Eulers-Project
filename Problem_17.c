#include<stdio.h>
#include<string.h>

int zaokrozi(int stevilo, int koliko) {
	return (stevilo / koliko) * koliko;
}


int enice(int stevilo) {
	switch(stevilo) 
	{
		case 0:
			return 0;
			break;
		case 1:
			return 3;
			break;
		case 2:
			return 3;
			break;
		case 3:
			return 5;
			break;
		case 4:
			return 4;
			break;
		case 5:
			return 4;
			break;
		case 6:
			return 3;
			break;
		case 7:
			return 5;
			break;
		case 8:
			return 5;
			break;
		case 9:
			return 4;
	}
	printf("ERROR\n");
	return 0;
}

int teens(int stevilo) {
	switch(stevilo) {
		case 10:
			return 3;
			break;
		case 11:
			return 6;
			break;
		case 12:
			return 6;
			break;
		case 13:
			return 8;
			break;
		case 14:
			return 8;
			break;
		case 15:
			return 7;
			break;
		case 16:
			return 7;
			break;
		case 17:
			return 9;
			break;
		case 18:
			return 8;
			break;
		case 19:
			return 8;
			break;
	}
	printf("ERROR\n");
	return 0;
}

int desetice(int stevilo) {
	switch(stevilo) {
		case 0:
			return 0;
			break;
		case 10:
			return 3;
			break;
		case 20:
			return 6;
			break;
		case 30:
			return 6;
			break;
		case 40:
			return 5;
			break;
		case 50:
			return 5;
			break;
		case 60:
			return 5;
			break;
		case 70:
			return 7;
			break;
		case 80:
			return 6;
			break;
		case 90:
			return 6;
			break;
	}
	printf("DESETICE ERROR\n");
	return 0;
}

int stotice(int stevilo) {
	switch(stevilo) {
		case 0:
			return 0;
			break;
		case 100:
			return 10;
			break;
		case 200:
			return 10;
			break;
		case 300:
			return 12;
			break;
		case 400:
			return 11;
			break;
		case 500:
			return 11;
			break;
		case 600:
			return 10;
			break;
		case 700:
			return 12;
			break;
		case 800:
			return 12;
			break;
		case 900:
			return 11;
			break;
		case 1000:
			return 11;
	}

	printf("STOTICE ERROR\n");
	return 0;
}

int vrniStevilo(int stevilo) {
	int vrni = 0;
	int desetke,enke;
	desetke = stevilo%100;
	enke = stevilo%10;

	if(stevilo > 100 && stevilo%100 > 0) {
		vrni+=3;
	}
	vrni+=stotice(zaokrozi(stevilo,100));
	if(desetke < 20 && desetke >= 10) {
		vrni+= teens(desetke);
		return vrni;
	}
	else if(desetke >= 20) {
		vrni += desetice(zaokrozi(desetke,10));
	}
	vrni+= enice(enke);
	return vrni;

}






int main() {

	int vsota = 0;
	int i,steviloCrk;
	int spodnjaMeja,zgornjaMeja;
	printf("Please insert lower and upper bound(min 1 / max 1000):\n");
	printf("Lower bound:\n");
	scanf("%d", &spodnjaMeja);
	printf("Upper bound:\n");
	scanf("%d", &zgornjaMeja);

	for(i = spodnjaMeja; i <= zgornjaMeja; i++) {
		steviloCrk = vrniStevilo(i);
		vsota+=steviloCrk;
	}
	printf("Number of letters used to write all the numbers between %d and %d in words: %d\n", spodnjaMeja,zgornjaMeja,vsota);








	return 0;
}