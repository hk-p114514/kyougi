import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int daily, bonus, need;
		daily = scanner.nextInt();
		bonus = scanner.nextInt();
		need = scanner.nextInt();
		scanner.close();
		int now = 0;
		int count = 0;
		int day = 0;
		while (now < need) {
			if (day >= 6) {
				now += bonus;
				day = 0;
			}
			now += daily;
			day++;
			count++;
		}
		System.out.println(count);
	}
}
