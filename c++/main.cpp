#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	stack<int> s;     // 穴
	bool inHole[ n ]; // 今穴に入っている猫

	int error = -1;
	for (int i = 0; i < n; i++) {
		int signal;
		cin >> signal;

		if (signal < 0) {
			// 猫が出てきたと記録されていた時
			if (s.empty()) {
				error = i;
			} else {
				// 穴が空っぽじゃなかったら
				if (-signal == s.top()) {
					s.pop();
					inHole[ -signal ] = false;
				} else {
					error = i;
				}
			}
		} else {
			// 猫が入ったと記録されていた時
			if (!inHole[ signal ]) {
				s.push(signal);
				inHole[ signal ] = true;
			} else {
				error = i;
			}
		}
	}

	if (error != -1) {
		cout << error << "\n";
	} else {
		cout << "OK" << '\n';
	}
}
