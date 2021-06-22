package JavaProject1.src.Models;

public class Manager {
	
	private String firstName;
	private String lastName;
	private String title;
	private static Manager managerInfo;
	/**
	 * @param firstName
	 * @param lastName
	 * @param title
	 */
	public Manager(String firstName, String lastName, String title) {
		super();
		this.firstName = firstName;
		this.lastName = lastName;
		this.title = title;
		Manager.managerInfo = this;
	}
	
	public static Manager getManager() {
		return Manager.managerInfo;
	}
	
	public String getFullName() {
		return this.firstName + " " + this.lastName;
	}

}
