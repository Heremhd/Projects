package meal_generator;

public class Main {
	public static void main(String[] args) {
		Arrays array = new Arrays();
		
		for (int i = 0; i<array.lowCal.length; i++){ //iterates through the array to check the values
			System.out.println();
				for(int j = 0; j<array.lowCal[i].length;j++) {
					System.out.println(array.lowCal[i][j]);
				}
			
		}
		
	}
}