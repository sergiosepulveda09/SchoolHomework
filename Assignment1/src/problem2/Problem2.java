package problem2;

public class Problem2
{

	public static void multiplicationTable()
	{
		for(int i = 1; i <= 10; i++)
		{
			System.out.printf("The Multiple of %d are: ", i);
			for(int j = 1; j <= 10; j++)
			{
				int result = i*j;
				System.out.printf("%d ", result);
			}
			System.out.println("\n");
		}
	}
	
}
