package problem1;

import java.util.Scanner;

public class Problem1_2
{

	public static void readTwoNumbers()
	{
		
		System.out.println("Please write two numbers\n");
		int a = 0, b = 0;
		Scanner in = new Scanner(System.in);
		System.out.println("Please write the first number: ");
		a = in.nextInt();
		System.out.println("Please write the second number: ");
		b = in.nextInt();
		in.close();
		System.out.println("The numbers divisible by 3 and 5 are: ");
		for(int i = a + 1; i < b; i++)
		{
			if(i % 3 == 0 && i % 5 == 0)
			{
				System.out.printf("%d ", i);
			}
		}
		System.out.println("\nThe numbers divisible by 6 or 7 are: ");
		for(int i = a + 1; i < b; i++)
		{
			if(i % 6 == 0 || i % 7 == 0)
			{
				System.out.printf("%d ", i);
			}
		}
		System.out.println("\nThe numbers not divisible by 3 are: ");
		for(int i = a; i <= b; i++)
		{
			if(i % 3 != 0)
			{
				System.out.printf("%d ", i);
			}
		}
		
	}
	
}
