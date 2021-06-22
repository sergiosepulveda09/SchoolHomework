package problem5;
import java.util.Scanner;
import java.io.*;
import java.lang.*;
public class Problem5_4 {
	public static void run() {
		String gmail = "gmail.com";
		System.out.println("type your email: ");
		Scanner in = new Scanner(System.in);
		int counter = 0;
		int counter1 = 0;
		int counter2 = 0;
		boolean correct = false;
		String userInput = in.next();

		for(int i = 0; i < userInput.length() -1; i++)
		{
			char letter = userInput.charAt(i);
			if(letter == '@')
			{
			counter++;
			counter2 = i;
			}
			else if(letter == '.')
			{
			counter1++;
			}
			
		}
		if(counter == 1 && counter1 == 1)
		{
			correct = true;
		}
		String atgmail = "@gmail.com";
		String newWord = "";
		for(int i = counter2; i < userInput.length() - 1; i++)
		{
			newWord = newWord + userInput.charAt(i);
			
		}
		if(atgmail.equals(newWord))
		{
			correct = true;
		}
		else
		{
			correct = false;
		}
		for(int i = 0; i < userInput.length() - 1; i++)
		{
			char letter = userInput.charAt(i);
			if(letter == '_' || Character.isLetterOrDigit(letter))
			{
				correct = true;
			}
			else
			{
				correct = false;
			}
		}
		if(correct)
		{
			System.out.println("This email is correct\n");
		}
		else
		{
			System.out.println("This email is not correct\n");
		}
		
	}

}
