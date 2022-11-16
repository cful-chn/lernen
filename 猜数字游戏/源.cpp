#include<iostream>
using namespace std;
#include<ctime>

int main() {

	srand((unsigned int)time(NULL));
	int a = rand() % 100 + 1;
	int b=0;
	int c = 0;
	cout << "Çë²ÂÊý:" << endl;
	cin >> b;
	while (1) {
		c++;
		if (b > a) {
			cout << "²Â´óÁË£¬ÇëÔÙ²Â" << endl;
			cin >> b;
		}
		else if(a<b) {
			cout << "²ÂÐ¡ÁË£¬ÇëÔÙ²Â" << endl;
			cin >> b;
		}
		else if (c > 4) {
			cout << "ÓÎÏ·Ê§°Ü" << endl;
			break;
		}
		else {
			cout << "¹§Ï²´ð¶Ô" << endl;
			break;
		}
		
	}
	
	system("pause");
	return 0;
}