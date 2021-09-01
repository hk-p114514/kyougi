#include <stdio.h>
// https : // atcoder.jp/contests/abc215/tasks/abc215_b

int main() {
	int n;
	scanf("%d", &n);

	int k = 2, increase = 2;
	while (increase <= n) {
		// 2^k <= n の間繰り返す
		increase *= k;
	}

	return (0);
}