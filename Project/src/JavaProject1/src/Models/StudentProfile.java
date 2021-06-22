package JavaProject1.src.Models;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Set;

public class StudentProfile {
	
	ArrayList<StudentProfile> profilesList = new ArrayList<StudentProfile>();
	static Set<Integer> usedStudentIDs = new HashSet<Integer>();
	
	private String firstName;
	private String lastName;
	private String gender;
	private String country;
	private int age;
	private String address;
	private int studentID;
	
	final static int MAX_STUDENT_ID = 99999999;
	final static int MIN_STUDENT_ID = 00000000;
	/**
	 * @param firstName
	 * @param lastName
	 * @param gender
	 * @param country
	 * @param age
	 * @param address
	 * @param studentID
	 */
	public StudentProfile(String firstName, String lastName, String gender, String country, int age, String address,
			int studentID) {
		super();
		this.firstName = firstName;
		this.lastName = lastName;
		this.gender = gender;
		this.country = country;
		this.age = age;
		this.address = address;
		this.studentID = studentID;
	}
	public String getFirstName() {
		return firstName;
	}
	public String getLastName() {
		return lastName;
	}
	public String getGender() {
		return gender;
	}
	public String getCountry() {
		return country;
	}
	public int getAge() {
		return age;
	}
	public String getAddress() {
		return address;
	}
	public int getStudentID() {
		return studentID;
	}
	
	public void setStudentID(int studentID) {
		this.studentID = studentID;
	}
	
	public void saveStudentProfile() {
		
		if (this.getStudentID() == 0) {
			int studentID = StudentProfile.createStudentID();
			this.setStudentID(studentID);
		}
		
		profilesList.add(this);
		
	}
	
	public static int createStudentID() {
		
		int newStudentID = (int) (Math.random() * ( StudentProfile.MAX_STUDENT_ID - StudentProfile.MIN_STUDENT_ID ));
		
		while (StudentProfile.usedStudentIDs.contains(newStudentID))			
			newStudentID = (int) (Math.random() * ( StudentProfile.MAX_STUDENT_ID - StudentProfile.MIN_STUDENT_ID ));
		
		StudentProfile.usedStudentIDs.add(newStudentID);
		return newStudentID;
		
	}
	
	public StudentProfile searchStudentProfile(int studentID) {
		
		for (int i=0;i<profilesList.size();i++) {
			StudentProfile tempProfile = profilesList.get(i);
			
			if (studentID == tempProfile.getStudentID())
				return tempProfile;
		}
		return null;
		
	}
	
	public String getFullName() {
		String fullName = this.getFirstName() + this.getLastName();
		return fullName;
	}
	
	public String getStudentTitle(boolean isTitle) {
		
		if (isTitle) {
			if (this.getGender().toUpperCase() == "M")
				return "Sir";
			else if (this.getGender().toUpperCase() == "F")
				return "Madam";
			return "Sir/Madam";
		}
		
		if (this.getGender().toUpperCase() == "M")
			return "Mr.";
		else if (this.getGender().toUpperCase() == "F")
			return "Mrs.";
		return "";
		
	}
	
	public void showMyCourses(Portal portalManager) {
		
		Student loggedInStudent = portalManager.portal.findStudent(loggedInAccount.getStudentID());
		
		System.out.printf("Hi, %s %s,\n", loggedInAccount.getStudentTitle(), loggedInAccount.getFullName());
		System.out.print("You have taken the folloowing courses so far:");
		
		ArrayList<TakenCourse> coursesList = loggedInStudent.getGeneralTranscript().getAllCourses();
		int courseCounter = 0;
		
		for (TakenCourse tc : coursesList) {
			
			courseCounter++;
			System.out.printf("%d) \n ",courseCounter);
			tc.printCourse();
			System.out.println();
			
		}
		
		System.out.println("\n------------------");
		System.out.print("Press any key to return to the main menu");
		System.in.read();
		
	}
	public void showMyProfile(Portal portalManager)
	{
		Student loggedInStudent = portalManager.portal.findStudent(loggedInAccount.getStudentID());
		System.out.printf("Name: ", loggedInAccount.getFullName());
		System.out.printf("\nStudentID: ", loggedInAccount.getStudentID());
		System.out.printf("\nGender: ", loggedInAccount.getGender());
		System.out.printf("\nAddress: ", loggedInAccount.getAddress());
		System.out.printf("Country of Origin: ", loggedInAccount.getCountry());
		System.out.printf("Age: ", loggedInAccount.getAge());
		System.out.printf("Year of Admission: ", loggedInStudent.getAdmissionYear());
		System.out.printf(f"Overall GPA: %.2f ",loggedInStudent.calculateGPA());
		System.out.println("Courses Taken: );
        loggedInStudent.getGTranscript().printTranscript();
        System.out.printf("\n----------------");
        System.out.printf("Press any key to return to the main menu");
        System.in.read();
	}
	
	public void showMyCertifcate(Portal portalManager)
	{
		String genderCall = "";
		Student loggedInStudent = portalManager.portal.findStudent(loggedInAccount.getStudentID());
		int qtyTakenCourses = loggedInStudent.getGTranscript().getAllCourses().size();
		Semester currentSemester = Portal.getCurrentSemester();
		Manager manager = Manager.getManager();
		if(loggedInAccount.getStudentTitle() == "Mr.")
		{
            genderCall = "he";
            
		}
        else if(loggedInAccount.getStudentTitle() == "Mrs.")
    	{
             genderCall = "she";
                
    	}
        else if(loggedInAccount.getStudentTitle() == "")
    	{
             genderCall = "he/she";
                
    	}
		System.out.printf("Dear %s \n", loggedInAccount.getStudentTitle(true));
		System.out.printf("This is to certify that %s %s with the Student ID  %d is a student at semester %d at CICCC. \n", loggedInAccount.getStudentTitle(), loggedInAccount.getFullName(), loggedInAccount.getStudentID(), currentSemester.getSemesterNo());
		System.out.printf("%s was admitted to our college in %d and has taken %d course(s) so far. \n ", genderCall, loggedInStudent.getAdmissionYear(), qtyTakenCourses);
		System.out.printf("Currently, %s resides at %s \n", genderCall, loggedInAccount.getAddress() );
		System.out.println("If you have any questions, please don't hesitate to contact us. \n ");
		System.out.println("Thanks, \n");
		System.out.printf("%s", manager.getFullName());
		System.out.println("\\n----------------");
        System.out.printf("Press any key to return to the main menu");
        System.in.read();
		
	}
	public void showMyTranscript(Portal portalManager) 
	{
		Student loggedInStudent = portalManager.portal.findStudent(loggedInAccount.getStudentID());
		System.out.printf("Hi %s %s \n", loggedInAccount.getStudentTitle(), loggedInAccount.getFullName());
		System.out.println("Here is your general transcript: ");
		ArrayList<TakenCourse> coursesList = loggedInStudent.getGeneralTranscript().getAllCourses();
		int courseCounter = 0;
		for (TakenCourse tc : coursesList) 
		{	
			courseCounter++;
			System.out.printf("%d) \n",courseCounter);
			tc.printCourse();
			System.out.println();	
		}
		System.out.printf("YOUR GPA IS: %.2f \n", loggedInStudent.calculateGPA());
		System.out.println("Here is your current semester transcript:");
		ArrayList<TakenCourse> currentSemesterCoursesList = loggedInStudent.getGeneralTranscript().getCurrentSemesterCourses();
		courseCounter = 0;
		if(currentSemesterCoursesList.size() == 0)
		{
			System.out.println("The student does not have courses taken this semester");
		}
		else
		{
			for(TakenCourse tc : currentSemesterCoursesList)
			{
                courseCounter += 1;
                System.out.printf("%d \n");
                tc.printCurrentSemesterCourses();
                System.out.println("\n");
			}
			System.out.printf("YOUR GPA IS: %.2f \n", loggedInStudent.calculateGPA(true));
			System.out.println("\n----------------");
	        System.out.printf("Press any key to return to the main menu");
	        System.in.read();
		}

	}
	public void showMyGPA(Portal portalManager)
	{
		Student loggedInStudent = portalManager.portal.findStudent(loggedInAccount.getStudentID());
		System.out.printf("Hi %s %s \n", loggedInAccount.getStudentTitle(), loggedInAccount.getFullName());
		System.out.printf("Your overallgpa is: %.2f \n", loggedInStudent.calculateGPA());
		System.out.printf("Your current semester's GPA is %.2f \n", loggedInStudent.calculateGPA(true));
		System.out.println("\n----------------");
        System.out.printf("Press any key to return to the main menu");
        System.in.read();
		
	}
	
	public void showGPARank(Portal portalManager)
	{
		Student loggedInStudent = portalManager.portal.findStudent(loggedInAccount.getStudentID()); 
		float studentGPA = loggedInStudent.calculateGPA();
		ArrayList<Student> studentsList = portalManager.getAllStudents();
		float[] GPAList;
		float[] sortedGPAList;
		GPAList[0] = studentGPA;
		for (Student s : studentsList)
		{
			GPAList.add(s.calculateGPA());
		}
		sortedGPAList = GPAList;
		 Arrays.sort(sortedGPAList);
		 int rankPosition = Arrays.asList(sortedGPAList).indexOf(studentGPA) + 1;
		 System.out.printf("Hi, %s %s", loggedInAccount.getStudentTitle(), loggedInAccount.getFullName());
		 System.out.printf("Your overall GPA is %.2f and therefore your rank is %d", studentGPA, rankPosition);
			System.out.println("\n----------------");
	        System.out.printf("Press any key to return to the main menu");
	        System.in.read();
	}
	

}