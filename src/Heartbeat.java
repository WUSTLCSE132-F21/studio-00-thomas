
public class Heartbeat {

	public static void main(String[] args) {
		// This section of code is meant to say 'n seconds have passed' every second
		int n = 0;
		// Because there is no loop() like in Arduino, we just use a regular Java loop instead
		// A for loop with variable i with an arbitrary value it shouldn't go over
		for(int i = 0; i < 60; i++) {
			try {
				System.out.println(n + " seconds have passed.");
				Thread.sleep(1000);
				n++;
			} catch(InterruptedException e) {				
			}
		}
	}

}
