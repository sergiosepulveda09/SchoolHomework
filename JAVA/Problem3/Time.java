package Problem3;

public class Time
{

	private int Hour = 0;
	private int minutes = 0;
	private String pmOrAm;
	public Time(int hour, int minutes, String pmOrAm)
	{
		this.Hour = hour;
		this.minutes = minutes;
		this.pmOrAm = pmOrAm;
		/*if(minutes > 60)
		{
			System.out.println("The minutes shouldn't be bigger than 60");
		}*/
	}
	
	public String getTime()
	{
		String time = this.Hour + ":" + this.minutes + this.pmOrAm;
		return time;
	}
	

}
