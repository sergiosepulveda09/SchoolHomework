package JavaProject1.src.Models;

public class Semester {

	private int semesterNo;
	private int year;
	private boolean isCurrentSemester;
	/**
	 * @param semesterNo
	 * @param year
	 */
	public Semester(int semesterNo, int year) {
		super();
		this.semesterNo = semesterNo;
		this.year = year;
		this.setIfCurrentSemester();
	}
	public int getSemesterNo() {
		return semesterNo;
	}
	public int getYear() {
		return year;
	}
	
	public boolean eq(Semester otherSemester) {
		return this.year == otherSemester.year && this.semesterNo == otherSemester.semesterNo;
	}
	
	private void setIfCurrentSemester() {
		int currentSemester = 1;
		int currentYear = 2020;
		
		if ((this.semesterNo == currentSemester) && (this.year == currentYear))
			this.isCurrentSemester = true;
		else
			this.isCurrentSemester = false;
	}
	
	public boolean isCurrentSemester() {		
		return this.isCurrentSemester;
	}
	
	public void printSemester() {
		System.out.printf("Year: %d Semester%d isCurrent %d\n", this.year, this.semesterNo, this.isCurrentSemester);
	}
}
