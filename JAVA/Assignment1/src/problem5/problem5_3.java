package problem5;
import java.util.Scanner;

public class problem5_3 {
//	public static void run() {
//		int tries = 0;
//		System.out.println();
//		Scanner input = new Scanner(System.in);
//		
//		tries = input.nextInt();
//		double x = 0;
//		double y = 0;
//		int hits = 0;
//		for(int i = 0; i < tries; i++) {
//			x = Math.random();
//			y = Math.random();
//			
//			if(x * x + y * y <= 1) {
//				hits++;
//			}
//			
//		}
//		double estimate = 4 * hits / tries;
//		
//		System.out.printf("estimated pi: %d", estimate);
//		input.close();
//	}
//	
	 public static void run()
     {
  	 int i;                                                               
  	 int nThrows = 0;                                             
  	 int nSuccess = 0;                                            
  									
  	 double x, y;                                                 
  									
  	 for (i = 0; i < 100 ; i++)                         
  	 {                                                            
  	    x = Math.random();      // Throw a dart                   
  	    y = Math.random();                                                
  									
  	    nThrows++;                                                        
  									
  	    if ( x*x + y*y <= 1 )             
  	       nSuccess++;                                               
  	 }                                                            
  									
  	 System.out.println("Pi/4 = " + (double)nSuccess/(double)nThrows );
  	 System.out.println("Pi = " + 4*(double)nSuccess/(double)nThrows );
     }
}
