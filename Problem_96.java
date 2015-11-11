import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.Arrays;


public class Problem_96 {

	
	private static int[][][] sodoku = new int[50][9][9];

    static boolean resi(int i, int j, int[][] polje) {
    	if(i == 8 && j == 9) {
    		return true;
    	}
    	if(j == 9) {
    		j = 0;
    		i++;
    	}

    	int val = polje[i][j];
    	if(val != 0) {
    		return resi(i,j+1,polje);
    	} else {
    		for(int a = 1; a <= 9; a++) {
    			if(veljavno(i,j,a,polje)) {
        			polje[i][j] = a;
    				if(resi(i,j+1,polje)) return true;
    				else polje[i][j] = 0;	
    			}
    		}
    	}
    	
    	
        return false;
    }
    
    static boolean preveriKvadrat(int val, int i, int j, int[][] polje){
    	int startJ = j/3*3;
    	int startI = i/3*3;
    	for(int a = startI; a < startI+3; a++) {
    		for(int b = startJ; b < startJ+3; b++) {
    			if(polje[a][b] == val) return false;
    		}
    	}
    	return true;
    }

    // Funkcija preveri, ali je dovoljeno postaviti vrednost "val" v polje[i][j]
    static boolean veljavno(int i, int j, int val, int[][] polje) {
    	
    	
    	for(int a = 0; a < 9; a++) {
    		if(polje[a][j] == val) return false;
    	}
    	
    	for(int a = 0; a < 9; a++) {
    		if(polje[i][a] == val) return false;
    	}
    	

    	return preveriKvadrat(val, i, j, polje);
    }

    
    private static int[] charToInt(char[] pretvori) {
    	int[] returnaj = new int[pretvori.length];
    	for(int i = 0; i < pretvori.length; i++) {
    		returnaj[i] = pretvori[i] - '0';
    	}
    	return returnaj;
    }
    
    
    private static void preberiVhod() throws IOException {
    	BufferedReader br = new BufferedReader(new FileReader("sodoku.txt"));
    	try {
    	    String line;
    	    int current = 0;

    	    while ((line = br.readLine()) != null) {
    	    	if(line.startsWith("Grid")) {
    	    		for(int i = 0; i < 9; i++) {
    	    			line = br.readLine();
    	    			sodoku[current][i] = charToInt(line.toCharArray());
    	    		}
    	    	}
    	    	current++;
    	    }
    	} finally {
    	    br.close();
    	}
    }

    public static void main(String[] args) {
    	
    	try {
			preberiVhod();
		} catch (IOException e) {
			e.printStackTrace();
		}
            
    	int acc = 0;

    	long startTime = System.currentTimeMillis();
    	for(int i = 0; i < 50; i++) {
    		resi(0,0, sodoku[i]);
    		acc += sodoku[i][0][0]*100 + sodoku[i][0][1]*10 + sodoku[i][0][2];
    	}
    	long endTime   = System.currentTimeMillis();
    	long totalTime = endTime - startTime;
    	System.out.println("Time calculating: " + totalTime);
    	
    	System.out.println("Result : " + acc);
    	
    }
}
