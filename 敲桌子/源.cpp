#include<iostream>
using namespace std;

int main() {
	for (int a = 1; a < 101; a++) {
		if (a % 10 == 7|| a / 7 == 7|| a % 7 == 0) {
			cout << "������" <<a<< endl;
		}
		else {
			cout << "���" <<a<< endl;
		}
	}
	system("pause");
	return 0;
}
