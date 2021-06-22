package Problem3;

public class App {
	private String appName;
	
	public App(String appName,boolean isInstalled) {
		this.appName = appName;
	}
	
	public String getAppName() {
		return this.appName;
	}
	
	@Override
	public String toString() {
		String name = this.appName;
		return name;
	}
	
}
