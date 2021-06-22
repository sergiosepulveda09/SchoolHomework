package problem5;

import java.util.Scanner;

public class Problem5_2 {
	
	
	public static void palindrome()
	{
		String word = "";
		String newWord = "";
		int counter = 0;
		
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
			for(int j = 0; j < length; j++) {
				if(newWord.charAt(j) != word.charAt(j)) {
					counter ++;
				}
			}
			if(counter == 1) {
				System.out.println("semi palindrome");
			}
			else {
				System.out.println("it's not even palindrome or semi palindrome");
			}

		}
		in.close();
	}
}
