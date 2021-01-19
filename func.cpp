#include <iostream>
#include <time.h>
using namespace std;

void timer(int seconds) {
	int milli_seconds = 1000 * seconds;
	clock_t start_time = clock();
	while(clock() < start_time + milli_seconds);
}

int main() {
	int IF1; int IF2; string LED_on = "\nLED on"; string LED_off = "\nLED off";
	do {
		int choise;
		cout << "\n1.and / 2.or / 3.not: "; cin >> choise;
		if (choise == 1) {
			cout << "\nIF1: "; cin >> IF1;
			cout << "IF2: "; cin >> IF2;
			if (IF1 == 1 && IF2 == 1) {
				cout << LED_on << "\n";
			} else {
				cout << LED_off << "\n";
			}
		} else if (choise == 2) {
			cout << "\nIF1: "; cin >> IF1;
			cout << "IF2: "; cin >> IF2;
			if (IF1 == 1 || IF2 == 1) {
				cout << LED_on << "\n";
			} else {
				cout << LED_off << "\n";
			}
		} else if (choise == 3) {
			cout << "\nIF1: "; cin >> IF1;
			if (IF1 == 1) {
				cout << LED_off << "\n";
			} else {
				cout << LED_on << "\n";
			}
		} else {
			timer(1);
			exit(1);
		}
	} while (true);
	return 0;
}
