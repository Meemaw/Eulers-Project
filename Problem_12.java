import java.util.*;

public class Problem_12 {
	
	private static int stDeljiteljev(long n) {
		int counter = 0;
		long koren = (int)Math.sqrt(n);
		for(int i = 1; i <= koren; i++) {
			if(n % i == 0) counter+=2;
		}
		if(koren*koren == n) {
			counter--;
		}
		return counter;
	}
	
	private static int stDeljiteljevPro(long n) {
		Set<Integer> delitelji = new HashSet<Integer>();
		for(int i = 1; i <= n; i++) {
			if(n % i == 0) {
				delitelji.add(i);
			}
		}
		return delitelji.size();
	}
	
	
	
	public static void main(String[] args) {
		
		boolean loop = false;
		int iteracija = 1;
		long prvo = 0;
		int counter = 0;
		Scanner sc = new Scanner(System.in);
		System.out.println("Please insert wanted number of divisors:");
		int meja = sc.nextInt();
		while(loop == false) {
			long triangleNumber = prvo + iteracija;
			prvo = triangleNumber;
			counter = stDeljiteljev(triangleNumber);
			if(counter > meja) {
				System.out.println("Value of first trinagle number to have over " + meja + " divisors:");
				System.out.println(triangleNumber);
				sc.close();
				break;
			}
			iteracija++;
		}
		sc.close();

		
	}

}
