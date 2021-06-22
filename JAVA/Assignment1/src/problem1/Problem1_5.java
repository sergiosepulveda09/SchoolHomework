package problem1;



public class Problem1_5
{

	public static void functions()
	{
		int x = 3;
		int f1 = (int)Math.pow(2,x);
		int f2 = (int)Math.pow(x,5);
		while(f2 > f1)
		{
			
			x++;
			f1 = (int)Math.pow(2,x);
			f2 = (int)Math.pow(x,5);
		}
		System.out.printf("From the number %d f1 is bigger than f2",x);
		
	}
	
	
}
