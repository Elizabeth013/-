#include <iostream>
#include <math.h>
using namespace std;

int proverka(int n, int k) {
	for (int j = 2; j < n; j++) {
		if (n / j != 0) {
			k = 1; break;
		}
		else k = 0;
	}
	return k;
}

int main() {
	int a, b, s, n, k = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		n = i;
		proverka(n, k);
		if (k == 1) {
			while (i != 0) {
				s = i / 10;
			}
			n = s; k = 0;
				proverka(n, k);
				if (k == 1) {
					cout << i << " ";
					k = 0;
				}
		}
		else cout << 0;
	}
	return 1;
}
