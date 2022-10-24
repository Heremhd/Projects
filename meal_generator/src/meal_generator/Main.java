package meal_generator;
import java.util.Date;
import java.util.Random;

public class Main {
	public static void main(String[] args) {
		Random rand = new Random(System.currentTimeMillis());
		int column = rand.nextInt(9);// am noob and need this declared within scope of this class :/		
		
		
		LowCalories meal = new LowCalories(column, 1);
		meal.getLowCal();
		
		
	}
}