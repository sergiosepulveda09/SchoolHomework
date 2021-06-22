package JavaProject1.src.Models;


public class Course
{

	private static String courseName;
	private static int courseCode;
	private static int courseUnit;
	
	public Course(String name, int code, int unit)
	{
		
		this.courseName = name;
		this.courseCode = code;
		this.courseUnit = unit;
	}

	
	public String getCourseName()
	{
		return courseName;
	}


	public int getCourseCode() 
	{
		return courseCode;
	}

	public int getCourseUnit()
	{
		return courseUnit;
	}



}
