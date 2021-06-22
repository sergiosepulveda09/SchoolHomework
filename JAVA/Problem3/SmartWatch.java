package Problem3;

import java.util.ArrayList;

public class SmartWatch 
{
	//private boolean isConnected;
	private ArrayList<App> appList;
	private ArrayList<Time> AlarmList;
	private String time;
	public SmartWatch() 
	{
		this.appList = new ArrayList<App>();
		this.time = "0";
		this.AlarmList = new ArrayList<Time>();
	}
	
	public void setAlarm(Time alarm)
	{
		this.AlarmList.add(alarm);
	}
	
	public void setTime(Time time)
	{
		this.time = time.getTime(); 
	}
	public void showTime()
	{
		System.out.println(this.time);
	}
	
	public void installApp(App app)
	{
		this.appList.add(app);
	}
	
	public void desinstallApp(App app)
	{
		this.appList.remove(app);
	}
	
	public void showAllApps() {
		for(App app:this.appList) {
			System.out.println(app);
		}
	}
}
