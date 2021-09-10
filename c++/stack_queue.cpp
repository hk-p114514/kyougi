#include <bits/stdc++.h>
using namespace std;

int main() {
	stack<int> stack;

	int n = 10;

	for (int i = 0; i < n; i++) {
		stack.push(i);
	}

	cout << "stack.size : " << stack.size() << endl;
	while (!stack.empty()) {
		cout << stack.top() << endl;
		stack.pop();
	}

	queue<int> q;

	for (int i = 0; i < n; i++) {
		q.push(i);
	}

	cout << "=======================================" << endl;

	cout << "q.size : " << q.size() << endl;
	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}

	return (0);
}