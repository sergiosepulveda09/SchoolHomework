package Problem3;

public class Contact {
	 private String number;
	 private String person;
	 
	 public Contact(String number, String person) {
		 this.number = number;
		 this.person = person;
	 }
	 
	 public String getPerson() {
		 return this.person;
	 }

	 public String getNumber() {
		 return this.number;
	 }
	 
	 @Override
	 public String toString() {
		 String person = this.person;
		 String number = this.number;
		 String text = person + " :" + number;
		 return text;
	 }
}