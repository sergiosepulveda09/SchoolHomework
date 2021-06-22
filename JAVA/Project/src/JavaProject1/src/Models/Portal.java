package JavaProject1.src.Models;

import java.util.ArrayList;

public class Portal {
	
	private static ArrayList<CollegeCourse> collegeCourses;
	private static ArrayList<Student> registeredStudents;
	/**
	 * @param collegeCourses
	 * @param registeredStudents
	 */
	public Portal(ArrayList<CollegeCourse> collegeCourses, ArrayList<Student> registeredStudents) {
		super();
		Portal.collegeCourses = collegeCourses;
		Portal.registeredStudents = registeredStudents;
	}
	
	public void registerStudent(Student s) {
		Portal.registeredStudents.add(s);
	}
	
	public Student findStudent(int studentID) {
		
		for (Student s : Portal.registeredStudents) {
			StudentProfile sp = s.getStudentProfile();
			if (studentID == sp.getStudentID())
					return s;
		}
		
		return null;
	}
	
	public void addCourse(CollegeCourse cc) {
		Portal.collegeCourses.add(cc);
	}
	
	public void addRandomCoursesToStudent(Student s) {
		
		int numberOfSemesterBetweenCurrentSemesterAndAdmission;
		
		for (CollegeCourse c : Portal.collegeCourses) {
			int rand = (int) (Math.random() * ( 1 - 0 ));
			int admissionYear = s.getAdmissionYear();
			Semester currentSemester = Portal.getCurrentSemester();
			
			if (currentSemester.getYear() == admissionYear) {
				numberOfSemesterBetweenCurrentSemesterAndAdmission = currentSemester.getSemesterNo();
			}
			else {
				numberOfSemesterBetweenCurrentSemesterAndAdmission = 2 * (currentSemester.getYear() - admissionYear) + currentSemester.getSemesterNo();
			}
			
			int randomSemester = (int) (Math.random() * ( numberOfSemesterBetweenCurrentSemesterAndAdmission - 1 ));
			int year = randomSemester / 2;
			int semesterNo = (randomSemester % 2) + 1;
			Semester semester = new Semester(semesterNo, s.getAdmissionYear() + year);
			
			int randomGrade = (int) (Math.random() * ( 100 - 30 ));
			
			if (rand <= 0.5) {
				s.registerCourse(c, semester, randomGrade);
			}
		}
		
	}
	
	public static Semester getCurrentSemester() {
		Semester currentSemester = new Semester(1,2020);
		return currentSemester;
	}

}
