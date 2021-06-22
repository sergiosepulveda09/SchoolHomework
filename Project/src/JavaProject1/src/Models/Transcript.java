package JavaProject1.src.Models;

import java.util.ArrayList;

public class Transcript {
	
	private ArrayList<TakenCourse> allTakenCourses;

	/**
	 * @param allTakenCourses
	 */
	public Transcript(ArrayList<TakenCourse> allTakenCourses) {
		super();
		this.allTakenCourses = new ArrayList<TakenCourse>();
	}
	
	public void addCourse(TakenCourse tc) {
		this.allTakenCourses.add(tc);
	}

	public void printTranscript() {
		
		if (this.allTakenCourses.size() == 0)
			System.out.println("The student does not have any taken courses");
		
		for (TakenCourse tc : this.allTakenCourses) {
			tc.printCourse();
			System.out.print(", ");
		}
		System.out.println();
	}
	
	public ArrayList<TakenCourse> getAllCourses() {
		return this.allTakenCourses;
	}
	
	public ArrayList<Integer> getAllCourseCodes() {
		ArrayList<Integer> courseCodeList = new ArrayList<Integer>();
		
		for (TakenCourse tc : this.allTakenCourses) {
			courseCodeList.add(tc.getCourseCode());
		}
		
		return courseCodeList;
	}
}
