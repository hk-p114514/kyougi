import java.util.Arrays;
import java.util.Scanner;

public class Array {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.print("Input n : ");
		int n = scanner.nextInt();
		int[] a = new int[n], b = new int[n];

		for (int i = 0; i < n; i++) {
			System.out.print("Input a[" + i + "] : ");
			a[i] = scanner.nextInt();
		}

		for (int i = 0; i < n; i++) {
			System.out.print("Input b[" + i + "] : ");
			b[i] = scanner.nextInt();
		}

		// 配列比較
		if (Arrays.equals(a, b)) {
			System.out.println("Array is equal.");
		} else {
			System.out.println("Array is not equal.");
		}

		// 配列コピー
		for (int i = 0; i < n; i++) {
			// 配列bを書き換え
			System.out.print("Input b[" + i + "] : ");
			b[i] = scanner.nextInt();
		}
		scanner.close();

		// もう一度配列aに直す
		// コピー元、開始位置、コピーされる方、開始位置、いくつこぴーするか
		System.arraycopy(a, 0, b, 0, n);
		for (int i = 0; i < n; i++) {
			System.out.println("Input b[" + i + "] : " + b[i]);
		}

		// 二次元配列のコピー
		String[][] original = new String[5][5];
		String[][] dst;
		dst = new String[original.length][];

		for (int i = 0; i < original.length; i++) {
			dst[i] = new String[original[i].length];
			System.arraycopy(original[i], 0, dst[i], 0, original[i].length);
		}
	}
}
