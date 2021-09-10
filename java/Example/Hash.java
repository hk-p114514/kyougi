import java.util.HashSet;
import java.util.Scanner;

public class Hash {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("Input n : ");
		int n = scanner.nextInt();

		HashSet<Integer> set = new HashSet<Integer>();
		for (int i = 0; i < n; i++) {
			System.out.print("Input value[" + i + "] :");
			set.add(scanner.nextInt());
		}

		System.out.println("================================================");

		for (Integer i : set) {
			System.out.println(i);
		}

		scanner.close();
	}
}
