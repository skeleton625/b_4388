#include <iostream>
using namespace std;

unsigned long long a, b;
int  t, c;
int main() {
	cin >> a >> b;
	while (a||b) {
		t = 0; c = 0;
		while (a != 0 || b != 0) {
			t = (a % 10 + b % 10 + t) / 10;
			if(t) c++;
			a /= 10; b /= 10;
		}
		cout << c << endl;
		cin >> a >> b;
	}
	return 0;
}