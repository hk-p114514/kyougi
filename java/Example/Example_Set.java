import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Example_Set {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		scanner.nextLine();

		Set<String> checkHash = new HashSet<String>();
		String line = scanner.nextLine();
		checkHash.contains(line);
		checkHash.add(line);
		String result = "No";

		scanner.close();

		System.out.println(result);
	}
}