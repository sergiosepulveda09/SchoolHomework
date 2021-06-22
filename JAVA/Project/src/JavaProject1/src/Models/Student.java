package JavaProject1.src.Models;

import java.util.ArrayList;
import java.util.HashMap;

public class Student 
{

    private int admissionYear = 2020;
    private int admissionSemester = 1;
    private Object generalTranscript;
    private Object semesterTranscript;
    private StudentProfile studentProfile;
    private String manager;
    private String account;
    
    public Student(StudentProfile studentProfile, String account, String manager)
    {
    	this.studentProfile = studentProfile;
    	this.account = account;
    	this.manager = manager;
    }

	public int getAdmissionYear() {
		return this.admissionYear;
	}


	public int getAdmissionSemester() {
		return this.admissionSemester;
	}

	public Object getGeneralTranscript() {
		return this.generalTranscript;
	}


	public Object getSemesterTranscript() {
		return this.semesterTranscript;
	}

	public StudentProfile getStudentProfile() {
		return this.studentProfile;
	}


	public String getManager() {
		return manager;
	}

	public String getAccount() {
		return account;
	}
	
	public void registerCourse(CollegeCourse cc, Semester s, int grade) {
		
		int courseRegistrationYear = s.getYear();
		int courseRegistrationSemester = s.getSemesterNo();
		
		TakenCourse course = new TakenCourse(cc, s, grade);
		
		if (s.isCurrentSemester()) {
			this.semesterTranscript.addCourse(course);
			this.generalTranscript.addCourse(course);
		}		
	}
	
	public double calculateGPA(boolean isCurrentSemester) {
		
		ArrayList<TakenCourse> courseList = new ArrayList<TakenCourse>();
		
		if (isCurrentSemester)
			courseList = this.getGeneralTranscript().getCurrentSemesterCourses();
		else
			courseList = this.getGeneralTranscript().getAllCourses();
		
		if (courseList.size() == 0)
			return 0;
		
		ArrayList<HashMap<String,Integer>> gradeAndUnitList = new ArrayList<HashMap<String,Integer>>();
		int unitSum = 0;
		double tempGPA = 0;
		
		for (TakenCourse tc : courseList) {
			int grade = tc.getGrade();
			int unit = tc.getUnit();
			
			HashMap<String,Integer> gradeAndUnitDict = new HashMap<String,Integer>();
			gradeAndUnitDict.put("grade", grade);
			gradeAndUnitDict.put("unit", unit);
			
			gradeAndUnitList.add(gradeAndUnitDict);
			unitSum = unitSum + unit;
		}
			
		for (int i=0;i<gradeAndUnitList.size();i++) {
			HashMap<String,Integer> tempDict = new HashMap<String,Integer>();
			tempDict = gradeAndUnitList.get(i);
			tempGPA = tempGPA + tempDict.get("grade") * tempDict.get("unit");
		}
		
		double gpa = tempGPA / unitSum;
		
		return gpa;
		
	}

}
