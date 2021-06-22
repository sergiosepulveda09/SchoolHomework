package Problem3;

import java.util.ArrayList;

public class SmartPhone {
	
	private ArrayList<Contact> contactList;
	
	public SmartPhone(){
		this.contactList = new ArrayList<Contact>();
	}
	
	public void callNumber(String number) {
		System.out.printf("Calling %s\n", number);
	}
	
	public void addNumber(Contact newContact) {
		this.contactList.add(newContact);
	}
	
	public void removeContact(Contact contact) {
		this.contactList.remove(contact);
	}
	
	public void callContact(Contact contact) {
		String person = contact.getPerson();
		String number = contact.getNumber();
		System.out.printf("Calling %s Number %s\n", person,number);
	}
	
	public void showContact() {
		for(Contact c1:this.contactList) {
			System.out.println(c1);
		}
	}
	
	
}
