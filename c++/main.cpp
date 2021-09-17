#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
//	int z[ n + 10 ];
  vector<int>z;

	for (int i = 0; i < n; i++) {
    int a;
		cin >> a;
    z.push_back(a);
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (j < n - 1) {
				// 二つのゼッケンに書かれた整数
				// バトンk
				// 生徒 i のゼッケンの整数を k で割った余りが
				// 生徒 i + 1 のゼッケンの整数を k で割った余りよりも大きいとき
				if (z[ i ] % i > z[ i + 1 ] % i) {
					// 生徒 i と生徒 i + 1 がゼッケンを交換し，生徒 i は生徒 i + 1 にバトンを渡す
					// int tmp = z[ i ];
					// z[ i ] = z[ i + 1 ];
					// z[ i + 1 ] = tmp;
				}
			} else {
				break;
			}
		}
	}

	cout << "==============" << endl;
	for (int i = 0; i < n; i++) {
		cout << z[ i ] << '\n';
	}
}
