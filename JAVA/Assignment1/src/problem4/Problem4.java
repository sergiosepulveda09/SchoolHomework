package problem4;

import java.util.Scanner;

public class Problem4 
{
	
	public static void arithmeticProblems()
	{
		System.out.println("type any: ");
		String problem = "";
		Scanner in = new Scanner(System.in);
		problem = in.next();
		int length = problem.length();
		int parenthesis = 0;
		boolean valid = false;
//		String operations = "+-*/%";
		
		int i = 0;
		while(i < length - 1) {
			char letter = problem.charAt(i);
			if (letter == '(') {
				parenthesis ++;
			} else if(letter == ')') {
				parenthesis--;
			}
			i++;
//			for( int j = 0; j < operations.length(); j++) {
//				char prev = operations.charAt(j);
//				if(prev == letter) {
//					
//				}
//			}
			
		}
		
		if (parenthesis == -1 || parenthesis != 0) {
			valid = false;
		} else {valid =  true;}
		
		System.out.println(valid);
		in.close();
	}

}
