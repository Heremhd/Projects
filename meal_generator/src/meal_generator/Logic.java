package meal_generator;

import java.util.*;

/** Make a main class for the logic and turn it into a super class to make the subsequent classes easier to use
 * find a way to automate the row int to make the calories spit out much easier (Most likely a for loop to iterate through the rows)
 * format the display method to make the print function look nice in console
 * make the program scalable for a GUI and ship it to GIT for my resume
 * @author Aiden
 */

public class Logic {
	Random rand = new Random(System.currentTimeMillis());
	
	public int column = rand.nextInt(9);
	public int row = 1;
	
	public Logic(int column, int row){
		this.column = column;
		this.row = row;
	}
}

class LowCalories extends Logic{

	LowCalories(int column, int row) {
		super(column, row);
}
	void getLowCal(){
		Arrays array = new Arrays();
		System.out.println(array.lowCal[column][0]);
		System.out.println(array.lowCal[column][1]);
	}
}