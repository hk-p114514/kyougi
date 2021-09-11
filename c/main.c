#include <stdio.h>
typedef struct {
	int h;
	int m;
} Time;
void input(Time *t);
// void output(Time t);
void init(Time *t, int h, int m);
Time add(Time a, Time b);
int compare(Time a, Time b);

int main() {
	Time goal;
	input(&goal);

	int n;
	scanf("%d", &n);
	Time az_sio[ n + 10 ];

	// 会津から塩川への電車の時刻表（到着）
	for (int i = 0; i < n; i++) {
		input(&az_sio[ i ]);
	}

	int m;
	scanf("%d", &m);
	Time sio_kita[ m ];

	// 塩川から喜多方への電車の時刻表 （到着）
	for (int i = 0; i < m; i++) {
		input(&sio_kita[ i ]);
	}

	Time cost;
	// 各駅間は10分かかる
	init(&cost, 0, 10);

	Time bento;
	// 弁当を渡すとき、1分かかる
	init(&bento, 0, 1);

	Time now;
	// 現在の時刻
	now = az_sio[ 0 ];

	now = add(now, cost);
	// 弁当私て
	now = add(now, bento);
	// 次の駅へ
	now = add(now, cost);

	int isRide = 0;
	for (int i = 0; i < m; i++) {
		if (compare(sio_kita[ i ], now) == 1) {
			now = sio_kita[ i ];
			isRide = 1;
			break;
		}
	}

	now = add(now, cost);

	if (isRide == 1) {
		printf("%d\n", compare(goal, now));
	} else {
		printf("0\n");
	}

	return (0);
}

// aの方が大きければ、1を返す、bの方が大きければ、0を返す。
int compare(Time a, Time b) {
	int h_a = a.h, m_a = a.m, h_b = b.h, m_b = b.m;
	int result = 0;

	if (h_a > h_b) {
		result = 1;
	} else if (h_a == h_b && m_a > m_b) {
		result = 1;
	} else if (h_a == h_b && m_a == m_b) {
		result = 1;
	}

	return (result);
}

Time add(Time a, Time b) {
	int h, m;
	m = a.m + b.m;

	h = (m / 60);
	m %= 60;

	h += a.h;

	Time t;
	init(&t, h, m);

	return (t);
}

void init(Time *t, int h, int m) {
	t->h = h;
	t->m = m;

	return;
}

void input(Time *t) {
	int h, m;
	scanf("%d %d", &h, &m);

	t->h = h;
	t->m = m;

	return;
}

// void output(Time t) {
// 	printf("%d %d\n", t.h, t.m);
// 	return;
// }
