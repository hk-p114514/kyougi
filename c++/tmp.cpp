#include <bits/stdc++.h>
using namespace std;

typedef struct {
	int a;
	int b;
} Pair;

typedef struct {
	int clCount;
} Color;
void colorChange(Color *c);

int main() {
	long long n;
	int dm;
	cin >> n >> dm;
	Pair t[ dm + 10 ];

	// 赤のときは 1 を，青のときは 2 を，黄色のときは 3
	int colors[] = {1, 2, 3};

	for (int i = 0; i < dm; i++) {
		cin >> t[ i ].a >> t[ i ].b;
	}

	int repair[ dm + 10 ];
	for (int i = 0; i < dm; i++) {
		// 剥がれているのが上、左から何番目か
		int left = t[ i ].a;
		int top = t[ i ].b;
	}

	return (0);
}

void colorChange(Color *c) {
	c->clCount++;
	if (c->clCount >= 3) {
		c->clCount = 0;
	}

	return;
}
