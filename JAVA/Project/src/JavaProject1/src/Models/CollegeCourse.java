package JavaProject1.src.Models;


public class CollegeCourse extends Course 
{
    //implements and complete class CollegeCourse
    private String name;
    private String code;
    private String unit;
	
    public CollegeCourse(String name, String code, String unit)
    {
        super(name, code, unit);
        this.unit = unit;
    }
    public String toString()
    {
        return "Course Name:" + name + " |Course Code:" + code + " |Course Unit:" + unit ;
    }
    
    public void printCourseAndGradeAndUnit() {
    	System.out.printf("%s: %s: %s", this.getCourseCode(), this.getCourseName(), this.getCourseUnit());
    }
}
