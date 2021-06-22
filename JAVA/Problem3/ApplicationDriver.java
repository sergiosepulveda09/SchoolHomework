package Problem3;

public class ApplicationDriver {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
//		Contact contact1 = new Contact("090-6852-0559","YUSUKE");
//		Contact contact2 = new Contact("236", "Emergency call");
//		Contact contact3 = new Contact("911","Mymom");
//		
//		SmartPhone iphone7 = new SmartPhone();
//		iphone7.addNumber(contact1);
//		iphone7.addNumber(contact2);
//		iphone7.addNumber(contact3);
//		
//		iphone7.showContact();
//		
//		iphone7.removeContact(contact2);
//		System.out.println("------------------------------------");
//		iphone7.showContact();
//		
//		iphone7.callNumber("911");
//		
//		iphone7.callContact(contact3);
//		

		App weChat = new App("We Chat", false);
		App messenger = new App("Messengger", false);
		App whatsApp = new App("What's App", false);

//		SmartTV samsung = new SmartTV();
//		
//		samsung.installApp(weChat);
//		samsung.installApp(messenger);
//		samsung.installApp(whatsApp);
//		
//		samsung.connectToInternet();
//		samsung.showAllApps();
//		samsung.openWeb("http://google.com");

		SmartWatch smartwatch = new SmartWatch();
		Time currentTime = new Time(12, 24, "pm");
		smartwatch.installApp(weChat);
		smartwatch.setTime(currentTime);
		smartwatch.showAllApps();
		smartwatch.showTime();
	}

}
