import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		String s = scanner.nextLine();
		scanner.close();

		String comparison = "Hello,World!";

		if (s.equals(comparison)) {
			System.out.println("AC");
		} else {
			System.out.println("WA");
		}
	}
}
