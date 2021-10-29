#include <iostream>
using namespace std;

void task_1(int n) {
	int s1 = 0, s2 = 0, left = 0, right = 0;
	left = n / 1000;
	right = n % 1000;
	while (left != 0) {
		s1 = s1 + (left % 10);
		left = left / 10;
		}
	while (right != 0) {
		s2 = s2 + (right % 10);
		right = right / 10;
		}
	if (s1 == s2) cout << "Happy ticket!";
	else cout << "No..";
	}
int main() {
	int n;
	cout << "Enter n= ";
	cin >> n;
	task_1(n);
	return 1;
}

