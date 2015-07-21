import java.util.*;

public class Problem_5 {
	
	private static HashMap<Integer,Integer> map = new HashMap<Integer,Integer>();
	
	private static HashMap<Integer,Integer> faktoriziraj(int stevilo) {
		HashMap<Integer,Integer> trenutniMap = new HashMap<Integer,Integer>();
		for(int i = 2; i <= stevilo; i++) {
			while(stevilo % i == 0) {
				if(!trenutniMap.containsKey(i)) trenutniMap.put(i, 1);
				else trenutniMap.put(i, trenutniMap.get(i)+1);
				stevilo /= i;
			}
		}
		return trenutniMap;
	}
	private static void posodobiMap(HashMap<Integer,Integer> trenutniMap, int meja) {
		for(int i = 2; i <= meja; i++) {
			if(trenutniMap.containsKey(i)) {
				if(map.containsKey(i)) {
					map.put(i, Math.max(trenutniMap.get(i), map.get(i)));
				}
				else {
					map.put(i, (int)trenutniMap.get(i));
				}
			}
		}
	} 
	
	private static long stevilo(HashMap<Integer,Integer> map, int meja) {
		long stevilo = 1;
		for(int i = 1; i <= meja; i++) {
			if(map.containsKey(i)) {
				stevilo *= Math.pow(i, map.get(i));
			}
		}
		return stevilo;
	}
	
	
		
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int stevilo = sc.nextInt();
		for(int i = 1; i <= stevilo; i++) {
			posodobiMap(faktoriziraj(i),stevilo);
		}
		
		System.out.println(map);
		System.out.println(stevilo(map,stevilo));
		
		sc.close();
	}

}