package Problem3;

import java.util.ArrayList;

public class SmartTV {
	private boolean isConnected;
	private ArrayList<App> appList;
	
	public SmartTV() {
		this.isConnected = false;
		this.appList = new ArrayList<App>();
	}
	
	public void connectToInternet() {
		this.isConnected = true;
	}
	
	public void installApp(App app) {
		this.appList.add(app);
	}
	
	public void showAllApps() {
		for(App app:this.appList) {
			System.out.println(app);
		}
	}
	
	public void openWeb(String url) {
		System.out.printf("Welcome to %s",url);
	}
}
