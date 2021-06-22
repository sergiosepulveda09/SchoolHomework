package JavaProject1.src.Models;


public class TakenCourse extends Course 
{

	private String name;
	private String code;
	private int unit;
	private Semester semester;
	private int grade;

	public TakenCourse(CollegeCourse cc, Semester semester, int grade)
	{
		super(cc.getCourseName(),cc.getCourseCode(),cc.getCourseUnit());
		this.semester = semester;
		this.grade = grade;
	}


	public int getGrade() {
		return grade;
	}


	public void setGrade(int grade) {
		this.grade = grade;
	}
	
	public int getUnit() {
		return unit;
	}

	public Semester getSemester() {
		return semester;
	}


	public String toString()
	{
		return "Course Name:" + name + " |Course Code:" + code + " |Course Unit:" + unit + " |Semster" + Semester.printSemester() + " |Grade" + this.grade ;

	}

	public void printCourse() {
		if (this.semester == Portal.getCurrentSemester())
			System.out.printf("%s: %s [Current Semester]", this.getCourseCode(), this.getCourseName()));
		else
			System.out.printf("%s: %s", this.getCourseCode(), this.getCourseName());
	}
	
	public void printCourseAndGrade() {
		if (this.semester == Portal.getCurrentSemester())
			System.out.printf("%s: %s: %d [Current Semester]", this.getCourseCode(), this.getCourseName(), this.getGrade());
		else
			System.out.printf("%s: %s: %d", this.getCourseCode(), this.getCourseName(), this.getGrade());
	}
	
	public void printCurrentSemesterCourses() {
		if (this.semester == Portal.getCurrentSemester())
			System.out.printf("%s: %s: %d [Current Semester]", this.getCourseCode(), this.getCourseName(), this.getGrade());
	}
	
	public TakenCourse getCourse() {
		return this;
	}

}
