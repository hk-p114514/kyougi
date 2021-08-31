import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Example_Set {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int n = scanner.nextInt();
		scanner.nextLine();

		Set<String> checkHash = new HashSet<String>();
		String result = "No";

		for (int i = 0; i < n; i++) {
			String line = scanner.nextLine();
			if (checkHash.contains(line)) {
				result = "Yes";
				break;
			} else {
				checkHash.add(line);
			}
		}
		scanner.close();

		System.out.println(result);
	}
}