package problem1;

import java.util.Scanner;

public class Problem1_1
{

	public static void readNumber() 
	{
		int number = 0;
		Scanner in = new Scanner(System.in);
		
		System.out.println("Enter a number not be divisible by 10: ");
		number = in.nextInt();
		while(number % 10 == 0) 
		{
			System.out.println("Enter another number: ");
			number = in.nextInt();
		} 
		in.close();
		int reversed = 0;
		int temp = number;
		while(number!= 0)
		{
			int digit = number % 10;
			reversed = reversed * 10 + digit;
			number /= 10;
			
		}
		System.out.printf("For %d, the Reversed number is %d", temp, reversed);
	}
}
