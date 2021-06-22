package problem5;
import java.util.Scanner;

public class Problem5_1 {
	
	public static void run() {
		String userInput = input();
		while(userInput == "") {
			userInput = input();
		}
	}
	
	public static String input() {
		System.out.println("type any:");
		Scanner userInput = new Scanner(System.in);
		String result = userInput.next();
		
		return result;
	}
}
