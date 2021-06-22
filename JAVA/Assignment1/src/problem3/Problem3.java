package problem3;

import java.util.Scanner;

public class Problem3
{

	public static void palindrome()
	{
		String word = "";
		String newWord = "";
		
		Scanner in = new Scanner(System.in);
		System.out.println("Write something: ");
		word = in.next();
		int length = word.length() - 1;
		for(int i = length; i >= 0; i--)
		{
			newWord = newWord + word.charAt(i);
		}
		System.out.printf("The word is : %s and its reverse is: %s", word, newWord);
		
		if(word.equals(newWord))
		{
			
			System.out.println("\nIt is a palidrome!");			
		}
		else
		{
			
			System.out.println("It is not a palidrome!");
		}
		in.close();
	}
	
}
