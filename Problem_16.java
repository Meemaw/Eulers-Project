import java.math.BigInteger;
import java.util.*;

public class Problem_16 {
	
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Please insert base:");
		String osnova = sc.next();
		
		
		BigInteger osnovaBig = new BigInteger(osnova);
		System.out.println("Please insert power:");
		BigInteger novi = osnovaBig.pow(sc.nextInt());
		System.out.println("Result:");
		System.out.println(novi);
		String beseda = novi.toString();
		int vsota = 0;
		for(int i = 0; i < beseda.length(); i++) {
			vsota += Character.getNumericValue(beseda.charAt(i));
		}
		System.out.println("Sum of the digits of result:");
		System.out.println(vsota);
		
		sc.close();
	}

}
