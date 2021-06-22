package problem1;

import java.util.Scanner;

public class Problem1_3 
{
	public static void convertToBinary()
	{
		
	int number = 0;
	String binaryS = "";
	Scanner in = new Scanner(System.in);
	System.out.println("Please enter any positive integer: ");
	number = in.nextInt();
	int temp = number;
	while(temp != 0)
	{
		int digit = temp % 2; // 1000 %2 = 0
		binaryS = digit + binaryS;
		temp /= 2;
	}

	in.close();
	System.out.printf("For %d, the binary is: %s", number, binaryS);
	}

}
