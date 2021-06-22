package JavaProject1.src.Models;


public class ApplicationDriver {

	public static void main(String[] args) {
		System.out.println();
		PortalManager pm = new PortalManager();
		pm.createATestPortal();
		Menu.showLoginMenu(pm);
	}

}
