package problem1;

import java.util.Scanner;

public class Problem1_4
{

	public static void minAndMax()
	{
		int number = 0;
		Scanner in = new Scanner(System.in);
		int minimum = Integer.MAX_VALUE;
		int maximum = Integer.MIN_VALUE;
		System.out.println("Please enter any integer: ");
		do
		{
			
		number = in.nextInt();
		if(number < minimum)
		{
			minimum = number;
		}
		if(number > maximum)
		{
			maximum = number;
		}
			
		}while(in.hasNextInt());
		in.close();
		System.out.printf("The maxi number is: %d and the min number is: %d\n", maximum, minimum);
		
		if(maximum < 0)
		{
			maximum *= -1;
		}
		else if(minimum < 0)
		{
			minimum *= -1;
		}
		int distance = maximum - minimum;
		System.out.printf("The absolute distance between the maximum and minimum is: %d", distance);
		
	}
	
}
