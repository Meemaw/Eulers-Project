import java.util.*;

public class Problem_14 {
	
	
	
	public static void main(String[] args) {
		
		System.out.println("Please insert starting number:");
		Scanner sc = new Scanner(System.in);
		int zacetnoStevilo = sc.nextInt();
		int max = 0;
		int maxStevilo = 0;
		while(zacetnoStevilo > 0) {
			int dolzina = 1;
			long trenutnoStevilo = zacetnoStevilo;
			while(trenutnoStevilo > 1) {
				dolzina++;
				if(trenutnoStevilo % 2 == 0) {
					trenutnoStevilo = trenutnoStevilo / 2;
				}
				else{
					trenutnoStevilo = 3*trenutnoStevilo +1;
				}
			}
			if(dolzina > max) {
				max = dolzina;
				maxStevilo = zacetnoStevilo;
			}
			zacetnoStevilo--;
		}
		System.out.println(String.format("Number %d has longest Collatz sequence: %d" , maxStevilo, max));
		sc.close();
	}

}
